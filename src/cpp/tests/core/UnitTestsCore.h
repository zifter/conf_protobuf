#pragma once

#include <string>
#include <vector>
#include <functional>

class UnitTest;

struct TestCase
{
    std::string name;
    std::function<void(UnitTest *)> test;
};

template<typename T>
struct OwnClassKeeper
{
    using ThisClassType = T;
};

struct UnitTestFactory
{
    template<class T>
    static UnitTest *Create()
    {
        return new T();
    }
};

class UnitTest
{
public:
    UnitTest() = default;
    
    void Register(const std::string &name, const std::function<void(UnitTest *)> &test)
    {
        testcases.push_back({name, test});
    };
    
    void Run();

private:
    std::vector<TestCase> testcases;
};

class UnitTestsCore
{
public:
    struct UnitTestDescr
    {
        std::string name;
        UnitTest *test;
    };

    static UnitTestsCore &Instance();

    void AddTest(const std::string &aName, UnitTest *aTest)
    {
        unittests.push_back({aName, aTest});
    }

    void Run();

private:
    UnitTestsCore() = default;
    ~UnitTestsCore() = default;

    std::vector<UnitTestDescr> unittests;
};

#define SUITCASE(CLASSNAME) \
    struct CLASSNAME; \
    struct Suitcase_##CLASSNAME \
    { \
        Suitcase_##CLASSNAME() \
        { \
            UnitTestsCore::Instance().AddTest(#CLASSNAME, UnitTestFactory::Create<CLASSNAME>()); \
        } \
    }; \
    Suitcase_##CLASSNAME suitcase_register_##CLASSNAME; \
    struct CLASSNAME \
        : public UnitTest \
        , public OwnClassKeeper<CLASSNAME>\



#define TEST(TESTNAME) \
    struct Test_##TESTNAME \
    { \
        Test_##TESTNAME(UnitTest *aUnitTest) \
        { \
            aUnitTest->Register(#TESTNAME, &test_##TESTNAME##_call); \
        } \
    }; \
    Test_##TESTNAME test_register_##TESTNAME = Test_##TESTNAME(this); \
    static void test_##TESTNAME##_call(UnitTest *aUnitTest) \
    { \
        static_cast<ThisClassType*>(aUnitTest)->TESTNAME(); \
    } \
    void TESTNAME()

