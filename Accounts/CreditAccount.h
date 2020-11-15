//
// Created by Alexey on 15.11.2020.
//

#ifndef BANKS_CREDITACCOUNT_H
#define BANKS_CREDITACCOUNT_H


#include "Account.h"

class CreditAccount : Account{

    Transaction Withdraw(int Sum);
    Transaction Transfer(int Sum, int ToAccount, string Comment);

};


#endif //BANKS_CREDITACCOUNT_H
