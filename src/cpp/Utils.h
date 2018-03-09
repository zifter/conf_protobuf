#pragma once

#include <google/protobuf/message.h>

namespace ProtobufUtils {
    void DumpMessageSize(const ::google::protobuf::Message *aMessage);
}
