//
// Created by szyns on 10.01.2024.
//

#ifndef LAB13_TESTY_BANKACCOUNT_H
#define LAB13_TESTY_BANKACCOUNT_H
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string last_name;
    string account_number;
    double balance;
public:
    BankAccount(string lastName, string accountNumber, double balance);
    void add (double amount);
    void withdraw(double amount);
    bool isMillionaire();

    const string &getLastName() const;

    void setLastName(const string &lastName);

    const string &getAccountNumber() const;

    void setAccountNumber(const string &accountNumber);

    double getBalance() const;

    void setBalance(double balance);

};


#endif //LAB13_TESTY_BANKACCOUNT_H
