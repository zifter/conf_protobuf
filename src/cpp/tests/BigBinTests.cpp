#include "BigBinTests.h"

#include "proto/v3/big_bin/BigBinV1.pb.h"
#include "proto/v3/big_bin/BigBinV2.pb.h"
#include "proto/v3/big_bin/BigBinV3.pb.h"

#include <iostream>
#include <string>

namespace BigBinTests
{
void test1()
{
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
        std::cout << "Message with lots of binary data" << std::endl << initialBinMsg.size();
        // 1028
    }

    {
        v3::BigBinV2 msg;
        msg.ParseFromString(initialBinMsg);
        assert(42 == msg.status());

        std::string buffer = msg.SerializeAsString();
        std::cout << "Message after reload v2:" << std::endl << buffer.size();
        // 1028
    }

    {
        v3::BigBinV3 msg;
        msg.ParseFromString(initialBinMsg);
        assert(42 == msg.status());

        std::string buffer = msg.SerializeAsString();
        std::cout << "Message after reload v3:" << std::endl << buffer.size();
        // 1028
    }
}

void run()
{
    test1();
}
}
