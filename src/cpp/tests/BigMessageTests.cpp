#include "tests/UnitTestsCore.h"

#include "Utils.h"
#include "proto/v3/big_message/BigMessage.pb.h"

#include <iostream>
#include <string>

void CheckSizeOfEmptyMessage()
{
    v3::BigMessage bigMessage;
    ProtobufUtils::DumpMessageSize(&bigMessage);
}

void CheckSizeOfMessageFilledByField()
{
    v3::BigMessage bigMessage;
    bigMessage.set_field1(42);
    ProtobufUtils::DumpMessageSize(&bigMessage);
}

void CheckSizeOfMessageFillAndResetToDefaultField()
{
    v3::BigMessage bigMessage;
    bigMessage.set_field1(42);
    bigMessage.set_field1(0);
    ProtobufUtils::DumpMessageSize(&bigMessage);
}

void CheckSizeOfMessageFilledBy1FieldInEmbeddedMessage()
{
    v3::BigMessage bigMessage;
    bigMessage.mutable_all_fields()->set_data_int32(42);
    ProtobufUtils::DumpMessageSize(&bigMessage);
}

START_SUITCASE(BigMessageTests)
    REGISTER_TEST(CheckSizeOfEmptyMessage);
    REGISTER_TEST(CheckSizeOfMessageFilledByField);
    REGISTER_TEST(CheckSizeOfMessageFillAndResetToDefaultField);
    REGISTER_TEST(CheckSizeOfMessageFilledBy1FieldInEmbeddedMessage);
END_SUITCASE(BigMessageTests)
