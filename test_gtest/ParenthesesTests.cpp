#include <gtest/gtest.h>
#include "Parentheses.hpp"

struct ParenthesesTests : public testing::Test {
    Parentheses p;
};

TEST_F(ParenthesesTests, givenEmptyString)
{
    // GIVEN
    std::string input{};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST_F(ParenthesesTests, givenCorrectTwoParentheses1)
{
    // GIVEN
    std::string input{"()"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST_F(ParenthesesTests, givenCorrectTwoParentheses2)
{
    // GIVEN
    std::string input{"{}"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST_F(ParenthesesTests, givenCorrectTwoParentheses3)
{
    // GIVEN
    std::string input{"[]"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST_F(ParenthesesTests, givenUncorrectTwoParentheses1)
{
    // GIVEN
    std::string input{")("};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenUncorrectTwoParentheses2)
{
    // GIVEN
    std::string input{"}{"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenUncorrectTwoParentheses3)
{
    // GIVEN
    std::string input{"]["};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenOnlyOpenParenthese1)
{
    // GIVEN
    std::string input{"("};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenOnlyOpenParenthese2)
{
    // GIVEN
    std::string input{"{"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenOnlyOpenParenthese3)
{
    // GIVEN
    std::string input{"["};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenOnlyClosedParenthese1)
{
    // GIVEN
    std::string input{")"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenOnlyClosedParenthese2)
{
    // GIVEN
    std::string input{"]"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenOnlyClosedParenthese3)
{
    // GIVEN
    std::string input{"}"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenNotBalancedVariant1)
{
    // GIVEN
    std::string input{"[{]}"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenNotBalancedVariant2)
{
    // GIVEN
    std::string input{"{{)(}}"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}

TEST_F(ParenthesesTests, givenBalancedVariant1)
{
    // GIVEN
    std::string input{"[({})]"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST_F(ParenthesesTests, givenBalancedVariant2)
{
    // GIVEN
    std::string input{"{()}[[{}]]"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST_F(ParenthesesTests, givenBalancedVariant3)
{
    // GIVEN
    std::string input{"()[]{}"};

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
