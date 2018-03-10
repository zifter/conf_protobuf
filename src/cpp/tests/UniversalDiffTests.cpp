#include "tests/core/UnitTestsCore.h"

#include "Utils.h"
#include "proto/v3/diff/Universal/UniversalDiff.pb.h"

#include <iostream>
#include <string>

SUITCASE(DiffTests)
{
    TEST(CheckSizeOfEmptyDiff)
    {
        v3::diff::universal::UniversalDiff diff;
        ProtobufUtils::AssertStringSize(&diff, 0);
    }
    
    TEST(SizeOf_1Transaction)
    {
        v3::diff::universal::UniversalDiff diff;
        diff.add_transactions()->set_data_int32(42);
        ProtobufUtils::AssertStringSize(&diff, 4);
    }
    
    TEST(SizeOf_2Transactions)
    {
        v3::diff::universal::UniversalDiff diff;
        diff.add_transactions()->set_data_int32(42);
        diff.add_transactions()->set_data_int32(66);
        ProtobufUtils::AssertStringSize(&diff, 8);
    }
    
    // === msg 59 103 119
    TEST(Fillip_Test1)
    {
        v3::diff::universal::UniversalDiff diff;
        {// msg.section1.testValue1 = 10
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(1);
            tr->add_path(1);
            tr->set_data_uint32(10);
        }
        {//msg.section1.testValue2 = 20
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(1);
            tr->add_path(2);
            tr->set_data_uint32(20);
        }
        {//msg.section2.testValue3 = 30.5
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(2);
            tr->add_path(1);
            tr->set_data_double(30.5);
        }
        {//msg.section2.testValue4 = 40.5
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(2);
            tr->add_path(2);
            tr->set_data_double(40.5);
        }
        {//msg.testValue5 = 50
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(3);
            tr->set_data_uint32(50);
        }
        {//msg.testValue6 = 60.5
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(4);
            tr->set_data_double(60.5);
        }
        ProtobufUtils::AssertStringSize(&diff, 67);
    }
    
    // === msg 1 0 6
    TEST(Fillip_Test2)
    {
        v3::diff::universal::UniversalDiff diff;
        ProtobufUtils::AssertStringSize(&diff, 0);
    }
    
    // === msg 21 37 47
    TEST(Fillip_Test3)
    {
        v3::diff::universal::UniversalDiff diff;
        {//msg.section1.testValue2 = 25
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(1);
            tr->add_path(2);
            tr->set_data_uint32(25);
        }
        {//msg.section2.testValue4 = 418.5
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(2);
            tr->add_path(2);
            tr->set_data_double(418.5);
        }
        ProtobufUtils::AssertStringSize(&diff, 23);
    }
    
    // === msg 19 42 55
    TEST(Fillip_Test4)
    {
        v3::diff::universal::UniversalDiff diff;
        {// item = msg.arrayValues.add()
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(5);
            tr->set_operation(::v3::diff::universal::Transaction_OpType::Transaction_OpType_ADD);
        }
        {//item.testValue1 = 42
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(3);
            tr->set_data_uint32(42);
        }
        {//item.testValue1 = 55
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(4);
            tr->set_data_double(55);
        }
        ProtobufUtils::AssertStringSize(&diff, 26);
    }
    
    // === msg 8 16 25
    TEST(Fillip_Test5)
    {
        v3::diff::universal::UniversalDiff diff;
        {//msg.arrayValues[0].testValue2 = 66
            v3::diff::universal::Transaction* tr = diff.add_transactions();
            tr->add_path(5);
            tr->add_path(0);
            tr->add_path(2);
            tr->set_data_uint32(66);
        }
        ProtobufUtils::AssertStringSize(&diff, 9);
    }
};
