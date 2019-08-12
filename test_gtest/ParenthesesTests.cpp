#include <gtest/gtest.h>
#include "Parentheses.hpp"


TEST(ParenthesesTests, givenEmptyStringWhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string inputEmpty{};
    Parentheses p;
    // WHEN
     auto result = p.isBalanced(inputEmpty);
    // THEN
     ASSERT_TRUE(result);   
}

TEST(ParenthesesTests, givenBasicPositivCasesWhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::vector <std::string> inputBasicPositivCases {"", "()", "{}", "[]"}; 
    Parentheses p;
    // WHEN
     for(auto currentCase : inputBasicPositivCases){
        auto result = p.isBalanced(currentCase);
    // THEN
        ASSERT_TRUE(result);
     }
}

TEST(ParenthesesTests, givenBasicPositivCasesWhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::vector <std::string> inputBasicNegativCases {")(", "}{", "]["}; 
    Parentheses p;
    // WHEN
     for(auto currentCase : inputBasicNegativCases){
        auto result = p.isBalanced(currentCase);
    // THEN
        ASSERT_FALSE(result);
     }
}

TEST(ParenthesesTests, givenMixedTypePositiveCasesWhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::vector <std::string> inputMixedTypePositive {"()[]", "{}[]", "{}()"};
    Parentheses p;
    // WHEN
    for(auto currentCase : inputMixedTypePositive){
        auto result = p.isBalanced(currentCase);
    // THEN
        ASSERT_TRUE(result);
    }
}

TEST(ParenthesesTests, givenMixedTypePositiveCasesWhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::vector <std::string> inputMixedTypeNegative {"()][", "}{[]", "(}"};
    Parentheses p;
    // WHEN
    for(auto currentCase : inputMixedTypeNegative){
        auto result = p.isBalanced(currentCase);
    // THEN
        ASSERT_FALSE(result);
    }
}

TEST(ParenthesesTests, givenImplicateBracketWhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::vector <std::string> inputTrueImplicateBracket{"({})", "(<>)","({<>})"};
    Parentheses p;
   // WHEN
    for(auto currentCase : inputTrueImplicateBracket){
        auto result = p.isBalanced(currentCase);
    // THEN
        ASSERT_TRUE(result);
    }
}

TEST(ParenthesesTests, givenImplicateBracketWhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::vector <std::string> inputFalseImplicateBracket{"({]}", "((>]","(<[})>"};
    Parentheses p;
    // WHEN
    for(auto currentCase : inputFalseImplicateBracket){
        auto result = p.isBalanced(currentCase);
    // THEN
        ASSERT_FALSE(result);
    }
}

TEST(ParenthesesTests, givenSecondImplicateBracketWhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::vector <std::string> inputFalseSecondImplicateBracket{"({)}", "([)]","[(])"};
    Parentheses p;
    // WHEN
    for(auto currentCase : inputFalseSecondImplicateBracket){
        auto result = p.isBalanced(currentCase);
    // THEN
        ASSERT_FALSE(result);
    }        

}