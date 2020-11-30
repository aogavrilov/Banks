//
// Created by Alexey on 15.11.2020.
//

#include "DebitAccount.h"
/*
virtual Transaction Withdraw(int Sum);
virtual Transaction Deposite(int Sum);
virtual Transaction Transfer(int Sum, int ToAccount);
 */
Transaction* DebitAccount::Withdraw(int Sum) {
    if(this->Sum < Sum){
        Transaction* transaction = new Transaction(Sum, this->AccountId, -1, "Withdraw", NotEnoughMoney);
        return transaction;
    }

    Transaction* transaction1 = new Transaction(Sum, this->AccountId, -1, "Withdraw", Successful);
    transaction1->Do();
    return transaction1;
}
Transaction* DebitAccount::Transfer(int Sum, long long ToAccount, string Comment) {
    if(this->Sum < Sum){
        Transaction* transaction = new Transaction(Sum, this->AccountId, ToAccount, "Withdraw", NotEnoughMoney);
        return transaction;
    }
    Transaction* transaction1 = new Transaction(Sum, this->AccountId, ToAccount, Comment, Successful);
    transaction1->Do();
    return transaction1;
}
Transaction DebitAccount::GetPercent(){
    Transaction transaction = Transaction(this->Sum * this->Percent / 100, -1, this->AccountId,
            "Percent by using card", Interest);
    transaction.Do();
    return transaction;
}

