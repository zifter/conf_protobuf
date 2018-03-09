#include "Utils.h"

void ProtobufUtils::AssertStringSize(const ::google::protobuf::Message *aMessage, size_t shouldBe)
{
    DumpMessageSize(aMessage);
    
    assert(aMessage->SerializeAsString().size() == shouldBe);
}

void ProtobufUtils::DumpMessageSize(const ::google::protobuf::Message *aMessage)
{
    std::cout << "Space is used: " << aMessage->SpaceUsed()
        << ", as a string: " << aMessage->SerializeAsString().size() << std::endl;
}
