#pragma once

#include <string>
#include <vector>
#include <functional>

struct TestCase
{
    std::string filename;
    std::string name;
    std::function<void()> test;
};

class UnitTestsCore
{
public:
    static UnitTestsCore &Instance();

    void Register(const std::string &filename, const std::string &name, const std::function<void()> &test)
    {
        testcases.push_back({filename, name, test});
    }
    void Run();

private:
    UnitTestsCore() = default;
    ~UnitTestsCore() = default;

    std::vector<TestCase> testcases;
};

#define START_SUITCASE(classname) \
    struct Suitcase_##classname \
    { \
        Suitcase_##classname() \
        { \
            std::string SUITCASE_NAME(#classname);

#define REGISTER_TEST(func) \
    UnitTestsCore::Instance().Register(SUITCASE_NAME, #func, &func)


#define END_SUITCASE(classname) \
        } \
    } suitcase_instance__##classname;
