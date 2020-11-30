//
// Created by Alexey on 15.11.2020.
//

#ifndef BANKS_CREDITACCOUNT_H
#define BANKS_CREDITACCOUNT_H


#include "Account.h"

class CreditAccount : public Account{
public:
    CreditAccount(long long AccountId, int ClientId, int Percent, int Sum) :  Account(AccountId, ClientId,
            Percent, Sum){};

    Transaction* Withdraw(int Sum) override ;
    Transaction* Transfer(int Sum, long long ToAccount, string Comment) override;

};


#endif //BANKS_CREDITACCOUNT_H
