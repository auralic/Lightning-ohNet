#include <OpenHome/Private/SuiteUnitTest.h>
#include <OpenHome/Functor.h>

using namespace OpenHome;
using namespace OpenHome::TestFramework;


class SuiteFunctorGenericInt : public SuiteUnitTest
{
public:
    SuiteFunctorGenericInt();
protected: // from SuiteUnitTest
    void Setup();
    void TearDown();
private:
    void CallbackIntByValue(TInt aInt);
    void CallbackIntByRef(TInt& aInt);
    void CallbackIntByPtr(TInt* aInt);
    void TestIntByValue();
    void TestIntByRef();
    void TestIntByPtr();
private:
    TInt iInt;
};

class SuiteFunctorGenericBuf : public SuiteUnitTest
{
public:
    SuiteFunctorGenericBuf();
protected: // from SuiteUnitTest
    void Setup();
    void TearDown();
private:
    void CallbackBufByValue(Brn aBuf);
    void CallbackBufByRef(const Brx& aBuf);
    void CallbackBufByPtr(const Brx* aBuf);
    void TestBufByValue();
    void TestBufByRef();
    void TestBufByPtr();
private:
    static const TUint kMaxBufSize = 26;
    static const Brn kBuf;
    Bws<kMaxBufSize> iBuf;
};

// SuiteFunctorGenericInt
SuiteFunctorGenericInt::SuiteFunctorGenericInt()
    : SuiteUnitTest("SuiteFunctorGenericInt")
{
    AddTest(MakeFunctor(*this, &SuiteFunctorGenericInt::TestIntByValue));
    AddTest(MakeFunctor(*this, &SuiteFunctorGenericInt::TestIntByRef));
    AddTest(MakeFunctor(*this, &SuiteFunctorGenericInt::TestIntByPtr));
}

void SuiteFunctorGenericInt::Setup()
{
    iInt = 0;
}

void SuiteFunctorGenericInt::TearDown()
{
}

void SuiteFunctorGenericInt::CallbackIntByValue(TInt aInt)
{
    iInt = aInt;
}

void SuiteFunctorGenericInt::CallbackIntByRef(TInt& aInt)
{
    iInt = aInt;
}

void SuiteFunctorGenericInt::CallbackIntByPtr(TInt* aInt)
{
    iInt = *aInt;
}

void SuiteFunctorGenericInt::TestIntByValue()
{
    // Test that we can pass an int by value through a templated functor.
    TInt val = 1234;
    FunctorGeneric<TInt> funcInt = MakeFunctorGeneric(*this, &SuiteFunctorGenericInt::CallbackIntByValue);
    funcInt(val);
    TEST(iInt == val);
}

void SuiteFunctorGenericInt::TestIntByRef()
{
    // Test that we can pass an int by ref through a templated functor.
    TInt val = 1234;
    FunctorGeneric<TInt&> funcInt = MakeFunctorGeneric(*this, &SuiteFunctorGenericInt::CallbackIntByRef);
    funcInt(val);
    TEST(iInt == val);
}

void SuiteFunctorGenericInt::TestIntByPtr()
{
    // Test that we can pass an int by ptr through a templated functor.
    TInt val = 1234;
    FunctorGeneric<TInt*> funcInt = MakeFunctorGeneric(*this, &SuiteFunctorGenericInt::CallbackIntByPtr);
    funcInt(&val);
    TEST(iInt == val);
}


// SuiteFunctorGenericBuf
const Brn SuiteFunctorGenericBuf::kBuf("abcdefghijklmnopqrstuvwxyz");

SuiteFunctorGenericBuf::SuiteFunctorGenericBuf()
    : SuiteUnitTest("SuiteFunctorGenericBuf")
{
    AddTest(MakeFunctor(*this, &SuiteFunctorGenericBuf::TestBufByValue));
    AddTest(MakeFunctor(*this, &SuiteFunctorGenericBuf::TestBufByRef));
    AddTest(MakeFunctor(*this, &SuiteFunctorGenericBuf::TestBufByPtr));
}

void SuiteFunctorGenericBuf::Setup()
{
    iBuf.SetBytes(0);
}

void SuiteFunctorGenericBuf::TearDown()
{
}

void SuiteFunctorGenericBuf::CallbackBufByValue(Brn aBuf)
{
    iBuf.Replace(aBuf);
}

void SuiteFunctorGenericBuf::CallbackBufByRef(const Brx& aBuf)
{
    iBuf.Replace(aBuf);
}

void SuiteFunctorGenericBuf::CallbackBufByPtr(const Brx* aBuf)
{
    iBuf.Replace(*aBuf);
}

void SuiteFunctorGenericBuf::TestBufByValue()
{
    // Test that we can pass a buffer by value through a templated functor.
    FunctorGeneric<Brn> funcBuf = MakeFunctorGeneric(*this, &SuiteFunctorGenericBuf::CallbackBufByValue);
    funcBuf(kBuf);
    TEST(iBuf == kBuf);
}

void SuiteFunctorGenericBuf::TestBufByRef()
{
    // Test that we can pass a buffer by reference through a templated functor.
    FunctorGeneric<const Brx&> funcBuf = MakeFunctorGeneric(*this, &SuiteFunctorGenericBuf::CallbackBufByRef);
    funcBuf(kBuf);
    TEST(iBuf == kBuf);
}

void SuiteFunctorGenericBuf::TestBufByPtr()
{
    // Test that we can pass a buffer by reference through a templated functor.
    FunctorGeneric<const Brx*> funcBuf = MakeFunctorGeneric(*this, &SuiteFunctorGenericBuf::CallbackBufByPtr);
    funcBuf(&kBuf);
    TEST(iBuf == kBuf);
}

void TestFunctorGeneric()
{
    Runner runner("FunctorGeneric tests\n");
    runner.Add(new SuiteFunctorGenericInt());
    runner.Add(new SuiteFunctorGenericBuf());
    runner.Run();
}

