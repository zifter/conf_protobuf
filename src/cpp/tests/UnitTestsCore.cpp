#include "UnitTestsCore.h"

#include <iostream>

UnitTestsCore &UnitTestsCore::Instance()
{
    static UnitTestsCore core;
    return core;
}

void UnitTestsCore::Run()
{
    for(auto &testcase : testcases)
    {
        std::cout << "Running... " << testcase.filename << " >> " << testcase.name << std::endl;
        testcase.test();
        std::cout << std::endl << "Finished" << std::endl << std::endl;
    }
}
