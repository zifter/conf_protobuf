#include "UnitTestsCore.h"

#include <iostream>

UnitTestsCore &UnitTestsCore::Instance()
{
    static UnitTestsCore core;
    return core;
}

void UnitTest::Run()
{
    for(auto &testcase : testcases)
    {
        std::cout << ">>>> " << testcase.name << std::endl;
        testcase.test(this);
    }
}

void UnitTestsCore::Run()
{
    for(auto &unittest : unittests)
    {
        std::cout << ">> Run " << unittest.name << std::endl;
        unittest.test->Run();
        std::cout << "<< end " << unittest.name << std::endl << std::endl;
    }
}

