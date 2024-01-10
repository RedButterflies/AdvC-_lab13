//
// Created by szyns on 10.01.2024.
//

#include "BankAccount.h"

#include <utility>

BankAccount::BankAccount(string lastName, string accountNumber, double balance) : last_name(std::move(lastName)),
                                                                                                account_number(std::move(
                                                                                                        accountNumber)),
                                                                                                balance(balance) {}

void BankAccount::add(double amount) {
if(amount < 0 || amount == 0)
{
    throw runtime_error("Przekazana kwota musi byc wieksza niz 0");
}
else
{
    balance += amount;
}
}

void BankAccount::withdraw(double amount) {
    if(amount < 0 || amount == 0)
    {
        throw runtime_error("Przekazana kwota musi byc wieksza niz 0");
    }
    else if(balance-amount < 0)
    {
        throw runtime_error("Zbyt mala ilosc srodkow na koncie");
    }
    else
    {
        balance -= amount;
    }


}

bool BankAccount::isMillionaire() {
    if(balance>1000000 || balance==1000000)
    {
        return true;
    }
    else
    {
        return false;
    }
}

const string &BankAccount::getLastName() const {
    return last_name;
}

void BankAccount::setLastName(const string &lastName) {
    last_name = lastName;
}

const string &BankAccount::getAccountNumber() const {
    return account_number;
}

void BankAccount::setAccountNumber(const string &accountNumber) {
    account_number = accountNumber;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setBalance(double balance) {
    BankAccount::balance = balance;
}
