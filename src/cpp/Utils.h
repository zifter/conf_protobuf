#pragma once

#include <google/protobuf/message.h>

namespace ProtobufUtils {
    void AssertStringSize(const ::google::protobuf::Message *aMessage, size_t shouldBe);

    void DumpMessageSize(const ::google::protobuf::Message *aMessage);
}
