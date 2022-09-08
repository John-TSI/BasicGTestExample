#include<gtest/gtest.h>
#include"../inc/adder.hpp"

TEST(MyTestSuite, BasicAssertions)
{
    int sum = Adder(3,4);
    ASSERT_EQ(7, sum);
    ASSERT_NE(20, Adder(5,12));
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}