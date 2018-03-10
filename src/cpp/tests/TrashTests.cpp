#include "tests/core/UnitTestsCore.h"

#include "Utils.h"
#include "proto/v3/Trash.pb.h"

#include <iostream>
#include <string>

SUITCASE(TrashTests)
{
    TEST(CheckNestedMsgOnSerializedSize)
    {
        {// 0
            v3::trash::Level0 msg;
            msg.set_field(42);
            ProtobufUtils::AssertStringSize(&msg, 2);
        }

        {// 1
            v3::trash::Level0 msg;
            msg.mutable_level1()->set_field(42);
            ProtobufUtils::AssertStringSize(&msg, 4);
        }

        {// 2
            v3::trash::Level0 msg;
            msg.mutable_level1()->mutable_level2()->set_field(42);
            ProtobufUtils::AssertStringSize(&msg, 6);
        }

        {// 3
            v3::trash::Level0 msg;
            msg.mutable_level1()->mutable_level2()->mutable_level3()->set_field(42);
            ProtobufUtils::AssertStringSize(&msg, 8);
        }
    }
    
};
