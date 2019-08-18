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

TEST(ParenthesesTests, givenBracketsWhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input = "()";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenSquareBracketsWhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input = "[]";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenCurlyBracketsWhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input = "{}";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}


TEST(ParenthesesTests, givenSingleRoundBracket_WhenIsBalancedIsCalled_ThenResultIsFalse)
{
    // GIVEN
    std::string input = "(";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenClosedRoundAndSquareBrackets_WhenIsBalancedIsCalled_ThenResultIsTrue)
{
    // GIVEN
    std::string input = "()[]";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenNotClosedRoundBrackets_WhenIsBalancedIsCalled_ThenResultIsFalse)
{
    // GIVEN
    std::string input = ")(";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenIntertwinedSquareAndRoundBrackets_WhenIsBalancedIsCalled_ThenResultIsFalse)
{
    // GIVEN
    std::string input = "[(])";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenTwoPairsOfRoundBracketsInTwoPairsOfSquaredBracketsInTwoPairsOfCurlyBrackets_WhenIsBalancedIsCalled_ThenResultIsTrue)
{
    // GIVEN
    std::string input = "{{[[(())]]}}";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenNotClosedRoundBracketsInTwoPairsOfCurlyBrackets_WhenIsBalancedIsCalled_ThenResultIsFalse)
{
    // GIVEN
    std::string input = "{{)(}}";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenRoundBracketsIntertwinedWithCurlyBrackets_WhenIsBalancedIsCalled_ThenResultIsFalse)
{
    // GIVEN
    std::string input = "({)}";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenCurlyBracketsInRoundBracketsInSquareBrackets_WhenIsBalancedIsCalled_ThenResultIsTrue)
{
    // GIVEN
    std::string input = "[({})]";
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
