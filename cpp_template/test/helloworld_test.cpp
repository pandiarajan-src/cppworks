#include "src/lib/helloworld.h"
#include "gtest/gtest.h"

TEST(HelloWorldShould, ReturnHelloWorld)
{
    HelloWorld hObj;
    std::string actual = hObj.PrintMessage();
    std::string expected {"Hello World"};
    EXPECT_EQ(expected, actual);
}

