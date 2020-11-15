//
// Created by Alexey on 14.11.2020.
//

#ifndef BANKS_ACCOUNT_H
#define BANKS_ACCOUNT_H

#include "../Transaction.h"

using namespace std;

class Account {
protected:
    int AccountId;
    int ClientId;
    int Percent;
    int Sum;
public:
    virtual Transaction Withdraw(int Sum);
    virtual Transaction Deposit(int Sum);
    virtual Transaction Transfer(int Sum, int ToAccount);

};


#endif //BANKS_ACCOUNT_H
