#include "tests/core/UnitTestsCore.h"

#include "proto/v3/big_bin/BigBinV1.pb.h"
#include "proto/v3/big_bin/BigBinV2.pb.h"
#include "proto/v3/big_bin/BigBinV3.pb.h"

#include <iostream>
#include <string>

SUITCASE(BigBinTests)
{
    TEST(CheckWhatIsHappeningWithDeletedFieldWithBigSize)
    {
        std::cout << "BigBinTests" << std::endl;
        
        std::string initialBinMsg;
        {
            constexpr int SIZE = 1024;
            char data[SIZE];
            for (int i = 0; i < SIZE; ++i)
            {
                data[i] = i % (std::numeric_limits<char>::max() - 1) + 1;
            }
            data[SIZE - 1] = '\0';
            
            v3::BigBinV1 msg;
            msg.set_status(42);
            msg.set_bindata(data);
            
            msg.SerializeToString(&initialBinMsg);
            
            std::cout << "Message with lots of binary data" << std::endl
            << initialBinMsg.size() << std::endl
            << msg.SpaceUsedLong() << std::endl;
            // 1028
            // 1071
        }
        
        // reserved
        {
            v3::BigBinV2 msg;
            msg.ParseFromString(initialBinMsg);
            assert(42 == msg.status());
            
            std::string buffer = msg.SerializeAsString();
            std::cout << "Message after reload v2:" << std::endl
            << buffer.size() << std::endl
            << msg.SpaceUsedLong() << std::endl;
            // 1028
            // 1103
        }
        
        // field deleted
        {
            v3::BigBinV3 msg;
            msg.ParseFromString(initialBinMsg);
            assert(42 == msg.status());
            
            std::string buffer = msg.SerializeAsString();
            std::cout << "Message after reload v3:" << std::endl
            << buffer.size() << std::endl
            << msg.SpaceUsedLong() << std::endl;
            // 1028
            // 1103
        }
        
        // cleanup field data
        {
            v3::BigBinV2 msg;
            msg.ParseFromString(initialBinMsg);
            assert(42 == msg.status());
            
            msg.DiscardUnknownFields();
            
            std::string buffer = msg.SerializeAsString();
            std::cout << "Message after reload v2 and remove field:" << std::endl
            << buffer.size() << std::endl
            << msg.SpaceUsedLong() << std::endl;
            // 2
            // 20
        }
    }
};
