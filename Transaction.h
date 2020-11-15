//
// Created by Alexey on 15.11.2020.
//

#ifndef BANKS_TRANSACTION_H
#define BANKS_TRANSACTION_H
using namespace std;

#include <string>

class Transaction {
    int Sum, From, To, Status;
    string Comment;
    // -1 - Withdraw, -2 - Deposit, other - Transfer
};


#endif //BANKS_TRANSACTION_H
