#include "Utils.h"

void ProtobufUtils::DumpMessageSize(const ::google::protobuf::Message *aMessage)
{
    std::cout << "Space is used: " << aMessage->SpaceUsed()
        << ", as a string: " << aMessage->SerializeAsString().size() << std::endl;
}
