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
    DebitAccount(long long AccountId, int ClientId, int Percent, int Sum) : Account(AccountId, ClientId,
                                                                               Percent, Sum){};
    Transaction* Withdraw(int Sum) override;
    Transaction* Transfer(int Sum, long long ToAccount, string Comment) override;
    Transaction GetPercent();
};


#endif //BANKS_DEBITACCOUNT_H
