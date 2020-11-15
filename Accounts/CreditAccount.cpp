//
// Created by Alexey on 15.11.2020.
//

#include "CreditAccount.h"
Transaction CreditAccount::Transfer(int Sum, int ToAccount, string Comment) {
    if(this->Sum < 0){
        this->Sum -= Sum * Percent / 100;
    }
    Transaction transaction = Transaction(Sum, this->AccountId, ToAccount, Comment, Successful);
    return transaction;
}
Transaction CreditAccount::Withdraw(int Sum) {
    if(this->Sum < 0){
        this->Sum -= Sum * Percent / 100;
    }
    Transaction transaction = Transaction(Sum, this->AccountId, -1, "Withdraw", Successful);
    return transaction;
}