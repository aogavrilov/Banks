//
// Created by Alexey on 15.11.2020.
//

#ifndef BANKS_DEPOSITACCOUNT_H
#define BANKS_DEPOSITACCOUNT_H


#include "Account.h"

class DepositAccount : public Account{
    tm* EndDepositTime;
    int InitialSum;
    void GetPercent();

public:
    DepositAccount(int AccountId, int ClientId, int Percent, int Sum) : Account(AccountId, ClientId, Percent, Sum){};

    Transaction Withdraw(int Sum);
    Transaction Transfer(int Sum, int ToAccount, string Comment);


};


#endif //BANKS_DEPOSITACCOUNT_H
