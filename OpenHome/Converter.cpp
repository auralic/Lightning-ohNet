#include <OpenHome/Private/Converter.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Private/Stream.h>
#include <OpenHome/Private/Printer.h>

extern "C"
{
#include "../thirdparty/libb64/cencode.h"
#include "../thirdparty/libb64/cdecode.h"
}

using namespace OpenHome;

void Converter::ToXmlEscaped(IWriter& aWriter, TByte aValue)
{
    switch (aValue) {
    case '<':
        aWriter.Write(Brn("&lt;"));
        break;
    case '>':
        aWriter.Write(Brn("&gt;"));
        break;
    case '&':
        aWriter.Write(Brn("&amp;"));
        break;
    case '\'':
        aWriter.Write(Brn("&apos;"));
        break;
    case '\"':
        aWriter.Write(Brn("&quot;"));
        break;
#if 0
    // (May 2016) Disable escaping line breaks for now.
    // Devices that use this will require that control points are able to unescape.
    // CPs that use ohNet won't be able to unescape until they update their ohNet version.
    // This can be re-enabled once CPs have had a reasonable time to update.
    case '\r':
    case '\n':
        aWriter.Write(Brn("&#xA;"));
        break;
#endif
    default:
        aWriter.Write(aValue);
        break;
    }
}

TBool Converter::IsMultiByteChar(TByte aChar, TUint& aBytes)
{
    TBool multiByte = true;
    if ((aChar & 0xF0) == 0xF0) {
        aBytes = 4;
    }
    else if ((aChar & 0xE0) == 0xE0) {
        aBytes = 3;
    }
    else if ((aChar & 0xC0) == 0xC0) {
        aBytes = 2;
    }
    else {
        multiByte = false;
    }
    return multiByte;
}

void Converter::ToXmlEscaped(IWriter& aWriter, const Brx& aValue)
{
    TUint utf8CharBytesRemaining = 0;
    TBool lastCharWasCr = false;
    for(TUint i = 0; i < aValue.Bytes(); ++i) {
        TByte ch = aValue[i];
        if (utf8CharBytesRemaining == 0) {
            TUint bytes;
            if (IsMultiByteChar(ch, bytes)) {
                utf8CharBytesRemaining = bytes;
            }
        }

        const TBool charWasCr = lastCharWasCr;
        lastCharWasCr = false;
        if (utf8CharBytesRemaining > 0) {
            utf8CharBytesRemaining--;
            aWriter.Write(ch);
        }
        else if (ch == '\n' || ch == '\r') {
            // Encode any line ending into a single line feed.
            // Set a marker so that single '\n' is output for '\r\n'.

            if (ch == '\r' || !charWasCr) {
                ToXmlEscaped(aWriter, '\n');
            }

            if (ch == '\r') {
                lastCharWasCr = true;
            }
        }
        else {
            ToXmlEscaped(aWriter, aValue[i]);
        }
    }
}

void Converter::ToBase64(IWriter& aWriter, const Brx& aValue)
{
    base64_encodestate state;
    base64_init_encodestate(&state);

    static const TUint kBlockSize = 1024;
    Bws<kBlockSize> buf;
    const char* src = (const char*)aValue.Ptr();
    char* dest = (char*)buf.Ptr();

    TUint remaining = aValue.Bytes();
    while (remaining > 0) {
        const TUint inputLen = (remaining > kBlockSize/4? kBlockSize/4 : remaining);
        const TUint len = base64_encode_block(src, inputLen, dest, &state);
        src += inputLen;
        remaining -= inputLen;
        buf.SetBytes(len);
        aWriter.Write(buf);
    }

    const TUint len = base64_encode_blockend(dest, &state);
    buf.SetBytes(len);
    aWriter.Write(buf);
}

void Converter::FromBase64(Bwx& aValue)
{
    base64_decodestate state;
    base64_init_decodestate(&state);

    static const TUint kBlockSize = 512;
    Bws<kBlockSize> buf;
    const char* src = (const char*)aValue.Ptr();
    char* dest = (char*)buf.Ptr();
    TUint remaining = aValue.Bytes();
    aValue.SetBytes(0);

    while (remaining > 0) {
        const TUint inputLen = (remaining > kBlockSize? kBlockSize : remaining);
        const TUint len = base64_decode_block(src, inputLen, dest, &state);
        src += inputLen;
        remaining -= inputLen;
        Brn destBuf((const TByte*)dest, len);
        aValue.Append(destBuf);
    }
}

void Converter::FromXmlEscaped(Bwx& aValue)
{
    TUint j = 0;
    TUint bytes = aValue.Bytes();
    TUint utf8CharBytesRemaining = 0;

    for (TUint i = 0; i < bytes; i++) {
        TByte ch = aValue[i];
        if (utf8CharBytesRemaining == 0) {
            TUint multibytes = 0;
            if (IsMultiByteChar(ch, multibytes)) {
                utf8CharBytesRemaining = multibytes;
            }
        }
        if (utf8CharBytesRemaining > 0) {
            utf8CharBytesRemaining--;
            aValue[j++] = aValue[i];
            continue;
        }

        if (aValue[i] != '&') {
            aValue[j++] = aValue[i];
            continue;
        }
        if (++i < bytes) {
            if (aValue[i] == 'l') {
                if (++i < bytes) {
                    if (aValue[i] == 't') {
                        if (++i < bytes) {
                            if (aValue[i] == ';') {
                                aValue[j++] = '<';
                                continue;
                            }
                        }
                    }
                }
            }
            else if (aValue[i] == 'g') {
                if (++i < bytes) {
                    if (aValue[i] == 't') {
                        if (++i < bytes) {
                            if (aValue[i] == ';') {
                                aValue[j++] = '>';
                                continue;
                            }
                        }
                    }
                }
            }
            else if (aValue[i] == 'a') {
                if (++i < bytes) {
                    if (aValue[i] == 'm') {
                        if (++i < bytes) {
                            if (aValue[i] == 'p') {
                                if (++i < bytes) {
                                    if (aValue[i] == ';') {
                                        aValue[j++] = '&';
                                        continue;
                                    }
                                }
                            }
                        }
                    }
                    else if (aValue[i] == 'p') {
                        if (++i < bytes) {
                            if (aValue[i] == 'o') {
                                if (++i < bytes) {
                                    if (aValue[i] == 's') {
                                        if (++i < bytes) {
                                            if (aValue[i] == ';') {
                                                aValue[j++] = '\'';
                                                continue;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (aValue[i] == 'q') {
                if (++i < bytes) {
                    if (aValue[i] == 'u') {
                        if (++i < bytes) {
                            if (aValue[i] == 'o') {
                                if (++i < bytes) {
                                    if (aValue[i] == 't') {
                                        if (++i < bytes) {
                                            if (aValue[i] == ';') {
                                                aValue[j++] = '\"';
                                                continue;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (aValue[i] == '#') {
                if (++i < bytes) {
                    if (aValue[i] == 'x') {
                        if (++i < bytes) {
                            if (aValue[i] == 'A') {
                                if (++i < bytes) {
                                    if (aValue[i] == ';') {
                                        aValue[j++] = '\n';
                                        continue;
                                    }
                                }
                            }
                        }
                    }
                    else if (aValue[i] == '1') {
                        if (++i < bytes) {
                            if (aValue[i] == '0') {
                                if (++i < bytes) {
                                    if (aValue[i] == ';') {
                                        aValue[j++] = '\n';
                                        continue;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    aValue.SetBytes(j);
}

TUint64 Converter::BeUint64At(const Brx& aBuf, TUint aIndex)
{
    TUint64 val = 0;
    for (TInt i=sizeof(val)-1; i>=0; i--) {
        TUint64 byte = aBuf[aIndex++];
        val += byte << (i*8);
    }
    return val;
}

TUint32 Converter::BeUint32At(const Brx& aBuf, TUint aIndex)
{
    TUint b[4];
    for (TUint i=0; i<4; i++) {
        b[i] = aBuf[aIndex++];
    }
    return ((b[0] << 24) | (b[1] << 16) | (b[2] << 8) | b[3]);
}

TUint16 Converter::BeUint16At(const Brx& aBuf, TUint aIndex)
{
    TUint b[2];
    for (TUint i=0; i<2; i++) {
        b[i] = aBuf[aIndex++];
    }
    return (TUint16)((b[0] << 8) | b[1]);
}

TUint32 Converter::LeUint32At(const Brx& aBuf, TUint aIndex)
{
    TUint b[4];
    for (TUint i=0; i<4; i++) {
        b[i] = aBuf[aIndex++];
    }
    return ((b[3] << 24) | (b[2] << 16) | (b[1] << 8) | b[0]);
}

TUint16 Converter::LeUint16At(const Brx& aBuf, TUint aIndex)
{
    TUint b[2];
    for (TUint i=0; i<2; i++) {
        b[i] = aBuf[aIndex++];
    }
    return (TUint16)((b[1] << 8) | b[0]);
}

void Converter::ToUtf8(TUint aCodePoint, IWriter& aWriter)
{
    Bws<6> buf;
    ToUtf8(aCodePoint, buf);
    aWriter.Write(buf);
}

void Converter::ToUtf8(TUint aCodePoint, Bwx& aBuf)
{
    if (aCodePoint>0x3ffffff)
    {
        // 31 bits
        aBuf.SetBytes(6);
        aBuf[0] = (TByte)((aCodePoint>>30)&0x01) | 0xfc; // bit 30  (1 bit)
        aBuf[1] = (TByte)((aCodePoint>>24)&0x3f) | 0x80; // bits 29-24 (6 bits)
        aBuf[2] = (TByte)((aCodePoint>>18)&0x3f) | 0x80; // bits 23-18 (6 bits)
        aBuf[3] = (TByte)((aCodePoint>>12)&0x3f) | 0x80; // bits 17-12 (6 bits)
        aBuf[4] = (TByte)((aCodePoint>>6)&0x3f) | 0x80;  // bits 11-6 (6 bits)
        aBuf[5] = (TByte)(aCodePoint&0x3f) | 0x80;       // bits 5-0 (6 bits)
    }
    else if (aCodePoint>0x1fffff)
    {
        // 26 bits
        aBuf.SetBytes(5);
        aBuf[0] = (TByte)((aCodePoint>>24)&0x03) | 0xf8; // bits 25-24 (2 bits)
        aBuf[1] = (TByte)((aCodePoint>>18)&0x3f) | 0x80; // bits 23-18 (6 bits)
        aBuf[2] = (TByte)((aCodePoint>>12)&0x3f) | 0x80; // bits 17-12 (6 bits)
        aBuf[3] = (TByte)((aCodePoint>>6)&0x3f) | 0x80;  // bits 11-6 (6 bits)
        aBuf[4] = (TByte)(aCodePoint&0x3f) | 0x80;       // bits 5-0 (6 bits)
    }
    else if (aCodePoint>0xffff)
    {
        // 21 bits
        aBuf.SetBytes(4);
        aBuf[0] = (TByte)((aCodePoint>>18)&0x07) | 0xf0; // bits 20-18 (3 bits)
        aBuf[1] = (TByte)((aCodePoint>>12)&0x3f) | 0x80; // bits 17-12 (6 bits)
        aBuf[2] = (TByte)((aCodePoint>>6)&0x3f) | 0x80;  // bits 11-6 (6 bits)
        aBuf[3] = (TByte)(aCodePoint&0x3f) | 0x80;       // bits 5-0 (6 bits)
    }
    else if (aCodePoint>0x7ff)
    {
        // 16 bits
        aBuf.SetBytes(3);
        aBuf[0] = (TByte)((aCodePoint>>12)&0x0f) | 0xe0; // bits 15-12 (4 bits)
        aBuf[1] = (TByte)((aCodePoint>>6)&0x3f) | 0x80;  // bits 11-6 (6 bits)
        aBuf[2] = (TByte)(aCodePoint&0x3f) | 0x80;       // bits 5-0 (6 bits)
    }
    else if (aCodePoint>0x7f)
    {
        // 11 bits
        aBuf.SetBytes(2);
        aBuf[0] = (TByte)((aCodePoint>>6)&0x1f) | 0xc0;  // bits 10-6 (5 bits)
        aBuf[1] = (TByte)(aCodePoint&0x3f) | 0x80;       // bits 5-0 (6 bits)
    }
    else
    {
        // 7 bits
        aBuf.SetBytes(1);
        aBuf[0] = (TByte)(aCodePoint&0x7f);
    }
}
