//
// Created by Alexey on 14.11.2020.
//

#include <iostream>
#include "Account.h"
Transaction Account::Deposit(int Sum) {
    Transaction transaction = Transaction(Sum, -1, this->AccountId, "Deposit", Successful);
    transaction.Do();
    return transaction;
}

Transaction* Account::Withdraw(int Sum) {
    Transaction* transaction = new Transaction(Sum, this->AccountId, -1, "Withdraw", Successful);
    transaction->Do();
    return transaction;
}

Transaction* Account::Transfer(int Sum, long long ToAccount, string Comment) {
    Transaction* transaction = new Transaction(Sum, this->AccountId, ToAccount, Comment, Successful);
    transaction->Do();
    return transaction;
}

