//
// Created by szyns on 10.01.2024.
//
#include "functions.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"


using namespace testing;
TEST(IsEvenTest, OddTests)
{
ASSERT_EQ(false, isEven(5));
}
TEST(IsEvenTest, EvenTests)
 {
 ASSERT_NE(false,isEven(6));
 }
 TEST(SignTest, FirstIfTests)
 {
 ASSERT_THAT(1,Eq(sign(6)));
 }
 TEST(DifferenceTest,OkResultTests)
 {
 vector<int> res;
 vector<int> num{1,2,3,6,5};
 res=difference(num);
 vector<int> resExpeted{1,1,3,-1};
 ASSERT_EQ(res.size(),resExpeted.size());
 for(int i=0;i<res.size();i++){
 EXPECT_EQ(res[i],resExpeted[i])
 <<" Obrot "<<i<<endl;
 }
 }
 TEST(ShowTest,EmptyLineTests){
 EXPECT_THROW(show(""), runtime_error);
 }
TEST(IsEvenTest, OddTestsErr)
{
ASSERT_EQ(true, isEven(5));
}
TEST(DifferenceTest,OkResultTestsErr)
{
vector<int> res;
vector<int> num{1,2,3,6,5};
res=difference(num);
 vector<int> resExpeted{1,2,3,-1};
 ASSERT_EQ(res.size(),resExpeted.size());
 for(int i=0;i<res.size();i++){
 EXPECT_EQ(res[i],resExpeted[i])
 <<" Obrot "<<i<<endl;
 }
 }
 TEST(PrimeTest,PrimeNumbersFunctionTest)
{
    ASSERT_EQ(true,isPrim(491));
}
TEST(PrimeTest,PrimeNumbersFunctionTest_B)
{
    ASSERT_EQ(false,isPrim(1));
}
TEST(DivisionTests, ZeroDivisionTest)
{
    EXPECT_THROW(division(92,0),runtime_error);
}
TEST(DivisionTests, ExpectedValueTests)
{
    ASSERT_EQ(division(81,3),27.0);
}
TEST(RootTests,NegativeRootTests)
{
    EXPECT_THROW(root(3,-1),runtime_error);
}
TEST(RootTests,NegativeNumberRootTests)
{
    EXPECT_THROW(root(-3,5),runtime_error);
}
TEST(RootTests,ValueTests)
{
    ASSERT_EQ(root(1296,4),6.0);
}
TEST(OppositeNumberTests,OppositeToZeroTests)
{
    EXPECT_THROW(oppositeNumber(0),runtime_error);
}
TEST(OppositeNumberTests,OppositeValueTest)
{
    ASSERT_EQ(oppositeNumber(-4.13),4.13);
}