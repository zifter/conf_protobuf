#include "tests/core/UnitTestsCore.h"

#include "Utils.h"
#include "proto/v3/big_message/BigMessage.pb.h"

#include <iostream>
#include <string>

SUITCASE(BigMessageTests)
{
    TEST(CheckSizeOfEmptyMessage)
    {
        v3::BigMessage bigMessage;
        ProtobufUtils::AssertStringSize(&bigMessage, 0);
    }
    
    TEST(CheckSizeOfMessageFilledByField)
    {
        v3::BigMessage bigMessage;
        bigMessage.set_field1(42);
        ProtobufUtils::AssertStringSize(&bigMessage, 2);
    }
    
    TEST(CheckSizeOfMessageFillAndResetToDefaultField)
    {
        v3::BigMessage bigMessage;
        bigMessage.set_field1(42);
        bigMessage.set_field1(0);
        ProtobufUtils::AssertStringSize(&bigMessage, 0);
    }
    
    TEST(CheckSizeOfMessageFilledBy1FieldInEmbeddedMessage)
    {
        v3::BigMessage bigMessage;
        bigMessage.mutable_all_fields()->set_data_int32(42);
        ProtobufUtils::AssertStringSize(&bigMessage, 4);
    }
};
