#include "tests/UnitTestsCore.h"

#include "Utils.h"
#include "proto/v3/diff/UniversalDiff.pb.h"

#include <iostream>
#include <string>

void CheckSizeOfEmptyDiff()
{
    v3::diff::UniversalDiff diff;
    ProtobufUtils::AssertStringSize(&diff, 0);
}

void SizeOf_1Transaction()
{
    v3::diff::UniversalDiff diff;
    diff.add_transactions()->set_data_int32(42);
    ProtobufUtils::AssertStringSize(&diff, 4);
}

void SizeOf_2Transactions()
{
    v3::diff::UniversalDiff diff;
    diff.add_transactions()->set_data_int32(42);
    diff.add_transactions()->set_data_int32(66);
    ProtobufUtils::AssertStringSize(&diff, 8);
}

// === msg 59 103 119
void Fillip_Test1()
{
    v3::diff::UniversalDiff diff;
    {// msg.section1.testValue1 = 10
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(1);
        tr->add_path(1);
        tr->set_data_uint32(10);
        assert(tr->has_data_uint32())
    }
    {//msg.section1.testValue2 = 20
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(1);
        tr->add_path(2);
        tr->set_data_uint32(20);
    }
    {//msg.section2.testValue3 = 30.5
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(2);
        tr->add_path(1);
        tr->set_data_double(30.5);
    }
    {//msg.section2.testValue4 = 40.5
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(2);
        tr->add_path(2);
        tr->set_data_double(40.5);
    }
    {//msg.testValue5 = 50
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(3);
        tr->set_data_uint32(50);
    }
    {//msg.testValue6 = 60.5
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(4);
        tr->set_data_double(60.5);
    }
    ProtobufUtils::AssertStringSize(&diff, 67);
}

// === msg 1 0 6
void Fillip_Test2()
{
    v3::diff::UniversalDiff diff;
    ProtobufUtils::AssertStringSize(&diff, 0);
}

// === msg 21 37 47
void Fillip_Test3()
{
    v3::diff::UniversalDiff diff;
    {//msg.section1.testValue2 = 25
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(1);
        tr->add_path(2);
        tr->set_data_uint32(25);
    }
    {//msg.section2.testValue4 = 418.5
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(2);
        tr->add_path(2);
        tr->set_data_double(418.5);
    }
    ProtobufUtils::AssertStringSize(&diff, 23);
}

// === msg 19 42 55
void Fillip_Test4()
{
    v3::diff::UniversalDiff diff;
    {// item = msg.arrayValues.add()
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(5);
        tr->set_operation(::v3::diff::Transaction_OpType::Transaction_OpType_ADD);
    }
    {//item.testValue1 = 42
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(3);
        tr->set_data_uint32(42);
    }
    {//item.testValue1 = 55
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(4);
        tr->set_data_double(55);
    }
    ProtobufUtils::AssertStringSize(&diff, 26);
}

// === msg 8 16 25
void Fillip_Test5()
{
    v3::diff::UniversalDiff diff;
    {//msg.arrayValues[0].testValue2 = 66
        v3::diff::Transaction* tr = diff.add_transactions();
        tr->add_path(5);
        tr->add_path(0);
        tr->add_path(2);
        tr->set_data_uint32(66);
    }
    ProtobufUtils::AssertStringSize(&diff, 9);
}

START_SUITCASE(DiffTests)
    REGISTER_TEST(CheckSizeOfEmptyDiff);
    REGISTER_TEST(SizeOf_1Transaction);
    REGISTER_TEST(SizeOf_2Transactions);
    REGISTER_TEST(Fillip_Test1);
    REGISTER_TEST(Fillip_Test2);
    REGISTER_TEST(Fillip_Test3);
    REGISTER_TEST(Fillip_Test4);
    REGISTER_TEST(Fillip_Test5);
END_SUITCASE(DiffTests)
