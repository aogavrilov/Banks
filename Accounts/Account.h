//
// Created by Alexey on 14.11.2020.
//

#ifndef BANKS_ACCOUNT_H
#define BANKS_ACCOUNT_H

#include "../Transactions/Transaction.h"

using namespace std;
enum AccountType{
    CREDITACCOUNT,
    DEBITACCOUNT,
    DEPOSITACCOUNT
};
class Account {
protected:
    int AccountId;
    int ClientId;
    int Percent;
    int Sum;
    int InterestOnTheBalance = 0;

public:
    AccountType accountType;
    Account(int AccountId, int ClientId, int Percent, int Sum) : AccountId(AccountId), ClientId(ClientId),
        Percent(Percent), Sum(Sum){};
    int CountOfMoney;
    virtual Transaction Withdraw(int Sum);
    Transaction Deposit(int Sum);
    virtual Transaction Transfer(int Sum, int ToAccount);


};


#endif //BANKS_ACCOUNT_H
