//
// Created by Alexey on 14.11.2020.
//

#include "Account.h"
Transaction Account::Deposit(int Sum) {
    Transaction transaction = Transaction(Sum, -1, this->AccountId, "Deposit", Successful);
    transaction.Do();
    return transaction;
}
