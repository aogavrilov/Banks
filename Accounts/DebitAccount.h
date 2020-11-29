//
// Created by Alexey on 15.11.2020.
//

#ifndef BANKS_DEBITACCOUNT_H
#define BANKS_DEBITACCOUNT_H


#include "Account.h"

class DebitAccount : public Account{
/*
 *
 *     virtual Transaction Withdraw(int Sum);
    virtual Transaction Deposite(int Sum);
    virtual Transaction Transfer(int Sum, int ToAccount);
 */
public:
    DebitAccount(int AccountId, int ClientId, int Percent, int Sum) : Account(AccountId, ClientId,
                                                                               Percent, Sum){};
    Transaction Withdraw(int Sum);
    Transaction Transfer(int Sum, int ToAccount, string Comment);
    Transaction GetPercent();
};


#endif //BANKS_DEBITACCOUNT_H
