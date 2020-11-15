//
// Created by Alexey on 14.11.2020.
//

#ifndef BANKS_ACCOUNT_H
#define BANKS_ACCOUNT_H
using namespace std;

class Account {
    int ClientId;
    int Withdraw(int Sum);
    int Deposite(int Sum);
    int Transfer(int Sum, int ToAccount);
};


#endif //BANKS_ACCOUNT_H
