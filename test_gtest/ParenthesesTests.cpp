#include <gtest/gtest.h>
#include "Parentheses.hpp"


TEST(ParenthesesTests, givenEmptyStringWhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenCorrectTwoParentheses)
{
    // GIVEN
    std::string input{"()"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenOnlyOpenParentheses)
{
    // GIVEN
    std::string input{"("};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenOtherVariant1)
{
    // GIVEN
    std::string input{"[{]}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}