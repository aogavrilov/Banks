//
// Created by Alexey on 15.11.2020.
//

#ifndef BANKS_TRANSACTION_H
#define BANKS_TRANSACTION_H
using namespace std;

#include <string>
enum StatusCodes{
    Successful,
    Denied,
    UnsuccessfulDenied,
    NotEnoughMoney,
    Interest

};
class Transaction {
    int Sum, From, To;
    StatusCodes Status;
    string Comment;
public:
    Transaction(int Sum, int From, int To, string Comment, StatusCodes Status) : Sum(Sum), From(From), To(To),
    Status(Status){};
    int Denied();
    void Do();
    // -1 - Withdraw, -2 - Deposit, other - Transfer
};


#endif //BANKS_TRANSACTION_H
