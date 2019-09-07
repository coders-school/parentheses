#include <gtest/gtest.h>
#include "Parentheses.hpp"


TEST(ParenthesesTests, givenEmptyString)
{
    // GIVEN
    std::string input{};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenCorrectTwoParentheses1)
{
    // GIVEN
    std::string input{"()"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenCorrectTwoParentheses2)
{
    // GIVEN
    std::string input{"{}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenCorrectTwoParentheses3)
{
    // GIVEN
    std::string input{"[]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenOnlyOpenParenthese1)
{
    // GIVEN
    std::string input{"("};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenOnlyOpenParenthese2)
{
    // GIVEN
    std::string input{"{"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenOnlyOpenParenthese3)
{
    // GIVEN
    std::string input{"["};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenOnlyClosedParenthese1)
{
    // GIVEN
    std::string input{")"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenOnlyClosedParenthese2)
{
    // GIVEN
    std::string input{"]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST(ParenthesesTests, givenOnlyClosedParenthese3)
{
    // GIVEN
    std::string input{"}"};
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

TEST(ParenthesesTests, givenOtherVariant2)
{
    // GIVEN
    std::string input{"{}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
