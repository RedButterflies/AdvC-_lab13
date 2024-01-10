//
// Created by szyns on 10.01.2024.
//
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "BankAccount.h"
using namespace testing;
struct BankTests:Test{
    BankAccount *account;
    BankTests(){
        account = new BankAccount("Christmas","34567890345867348734444456",100346986.8);
    }
    ~BankTests(){
        delete account;
    }
};
TEST_F(BankTests,BankAccountAddNeg)
{
    EXPECT_THROW(account->add(-500),runtime_error);
}
TEST_F(BankTests,BankAccountAddValue)
{
    double oldBalance = account->getBalance();
    account->add(600);
    ASSERT_EQ(account->getBalance(),oldBalance+600);
}
TEST_F(BankTests,BankAccountWithdrawNeg)
{
    EXPECT_THROW(account->withdraw(-500),runtime_error);
}
TEST_F(BankTests,BankAccountWithDrawValueTooMuch)
{
    EXPECT_THROW(account->withdraw(5000000000),runtime_error);
}
TEST_F(BankTests,BankAccountWithDrawValue)
{
    double oldBalance = account->getBalance();
    account->withdraw(600);
    ASSERT_EQ(account->getBalance(),oldBalance-600);
}
TEST_F(BankTests,BankAccountMilionaire)
{
   ASSERT_EQ(account->isMillionaire(),true);
}

struct BankAccountState{
        float before;
        float after;
};

struct BankAccountParamTest: BankTests,WithParamInterface<BankAccountState>
{
    BankAccountParamTest(){
        account->setBalance(GetParam().before);
    }
};

TEST_P(BankAccountParamTest,BTests)
{
    BankAccountState as=GetParam();
    account->add(500);
    double after = as.before + 500;
    EXPECT_EQ(as.after,after);
}

INSTANTIATE_TEST_CASE_P(Default,BankAccountParamTest,Values(BankAccountState{300,800},BankAccountState{25400,25900}));