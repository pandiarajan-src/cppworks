#include "src/libs/2_find_prev_alphabet.h"
#include "gtest/gtest.h"

TEST(FindPrevAlphabet, ReturnB)
{
    char expected = 'B';
    char actual = 'C';
    find_prev_alphabet(actual);
    EXPECT_EQ(expected, actual);
}

TEST(FindPrevAlphabet, Returna)
{
    char expected = 'a';
    char actual = 'b';
    find_prev_alphabet(actual);
    EXPECT_EQ(expected, actual);
}

TEST(FindPrevAlphabet, ReturnA)
{
    char expected = 'A';
    char actual = 'B';
    find_prev_alphabet(actual);
    EXPECT_EQ(expected, actual);
}

TEST(FindPrevAlphabet, ReturnAT)
{
    char expected = '@';
    char actual = 'A';
    find_prev_alphabet(actual);
    EXPECT_EQ(expected, actual);
}

TEST(FindPrevAlphabet, ReturnOneQuote)
{
    char expected = '`';
    char actual = 'a';
    find_prev_alphabet(actual);
    EXPECT_EQ(expected, actual);
}