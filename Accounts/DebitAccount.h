//
// Created by Alexey on 15.11.2020.
//

#ifndef BANKS_DEBITACCOUNT_H
#define BANKS_DEBITACCOUNT_H


#include "Account.h"

class DebitAccount : Account{
/*
 *
 *     virtual Transaction Withdraw(int Sum);
    virtual Transaction Deposite(int Sum);
    virtual Transaction Transfer(int Sum, int ToAccount);
 */
    Transaction Withdraw(int Sum);
    Transaction Transfer(int Sum, int ToAccount, string Comment);
    Transaction GetPercent();
};


#endif //BANKS_DEBITACCOUNT_H
