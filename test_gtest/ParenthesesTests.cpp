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
TEST(ParenthesesTests, givenString1WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"()"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString2WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"[]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString3WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString4WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{}()"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString5WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"([])"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString6WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{[]}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString7WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"[[]]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString8WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{{[]}()}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString9WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"({}()[])"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString10WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"[{}[]{}]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString11henIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{()[]{}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString12WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{()({})}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString13WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{[][][](())}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString14WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"[[{{{}}}]]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString15WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"({((((((()))))))})"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString16WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{{[]}{(())}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString17WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{{{()}()}}(){}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString17_1WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{{([])}{(())}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString17_2WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{{([])}{(({{()}}))}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString17_3WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{{([])}{(({{({{}})}}))}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}
TEST(ParenthesesTests, givenString17_4WhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{"{{([])}{({{}}({{({{}})}}))}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

//Bad 

TEST(ParenthesesTests, givenString18WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{")("};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString19WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"("};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString20WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"["};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString21WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"{"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString22WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{")"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString23WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString24WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString25WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{")))"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString26WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"]]]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString27WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"}}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString28WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"((("};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString29WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"[[["};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString30WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"{{{"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString31WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"{(]]]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString32WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"[[{]]]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString33WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"{{(]]]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString34WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"([{}]])]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString35WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"([{}])]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString36WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"({[{)}])]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString37WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"()[{}]])[]]"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString38WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"([{}]])()]}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString39WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"([{()}]])]{}()["};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString40WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"{{{}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString42WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"{(){()})}})"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString43WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"{())}}{}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString44WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"{()())}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString45WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"{(){})}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
TEST(ParenthesesTests, givenString46WhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::string input{"{())}}"};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_FALSE(result);
}
