#include "src/libs/0_hello_world.h"
#include "gtest/gtest.h"

TEST(SimpleHelloWorldShould, ReturnHelloWorld)
{
    std::string expected = "Hi! Hello World? How are you doing?";
    std::string actual = SimpleHelloWorld();
    EXPECT_EQ(expected, actual);
}