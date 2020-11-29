//
// Created by Alexey on 15.11.2020.
//

#ifndef BANKS_DEPOSITACCOUNT_H
#define BANKS_DEPOSITACCOUNT_H


#include "Account.h"
#include <time.h>
class DepositAccount : public Account{
    tm* EndDepositTime;
    int InitialSum;
    void GetPercent();

public:
    DepositAccount(int AccountId, int ClientId, int Percent, int Sum) : Account(AccountId, ClientId, Percent, Sum){};

    Transaction Withdraw(int Sum);
    Transaction Transfer(int Sum, int ToAccount, string Comment);

    /*
     * time_t  now1 = time(0);
    tm* lt1 = localtime(&now1);
    lt1->tm_mday -=1;

     */
};


#endif //BANKS_DEPOSITACCOUNT_H
