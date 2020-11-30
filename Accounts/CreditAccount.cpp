//
// Created by Alexey on 15.11.2020.
//

#include <iostream>
#include "CreditAccount.h"
Transaction* CreditAccount::Transfer(int Sum, long long ToAccount, string Comment) {
    if(this->Sum < 0){
        this->Sum -= Sum * Percent / 100;
    }
    Transaction* transaction = new Transaction(Sum, this->AccountId, ToAccount, Comment, Successful);
    transaction->Do();
    return transaction;
}
Transaction* CreditAccount::Withdraw(int Sum) {

    if(this->Sum < 0){
        this->Sum -= Sum * Percent / 100;
    }

    Transaction* transaction = new Transaction(Sum, this->AccountId, -1, "Withdraw", Successful);
    transaction->Do();

    return transaction;
}