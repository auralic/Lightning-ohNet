#ifndef HEADER_XML_PARSER
#define HEADER_XML_PARSER

#include <OpenHome/Buffer.h>
#include <OpenHome/Types.h>
#include <OpenHome/Exception.h>

EXCEPTION(XmlError)

namespace OpenHome {
namespace Net {

/**
 * Very basic XML parser
 *
 * Find returns the data inside a given tag and (optionally) the data remaining after the tag
 * Attribute returns the value of a given attribute within an element
 * Element returns a full element (including its start and end tags) and (optionally) the data remaining after the element
 */
class XmlParserBasic
{
public:
    static Brn Find(const TChar* aTag, const Brx& aDocument);
    static Brn Find(const Brx& aTag, const Brx& aDocument);
    static Brn Find(const TChar* aTag, const Brx& aDocument, Brn& aRemaining);
    static Brn Find(const Brx& aTag, const Brx& aDocument, Brn& aRemaining);
    static Brn FindAttribute(const TChar* aTag, const TChar* aAttribute, const Brx& aDocument);
    static Brn FindAttribute(const Brx& aTag, const Brx& aAttribute, const Brx& aDocument);
    static Brn Element(const TChar* aTag, const Brx& aDocument);
    static Brn Element(const Brx& aTag, const Brx& aDocument);
    static Brn Element(const TChar* aTag, const Brx& aDocument, Brn& aRemaining);
    static Brn Element(const Brx& aTag, const Brx& aDocument, Brn& aRemaining);

private:
    enum ETagType
    {
        eTagOpen
       ,eTagClose
       ,eTagOpenClose
    };
    enum EParserState
    {
        eSearchOpen
       ,eSearchClose
    };

private:
    static void NextTag(const Brx& aDocument, Brn& aName, Brn& aAttributes, Brn& aNamespace, TUint& aIndex, Brn& aRemaining, ETagType& aType);
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_XML_PARSER
