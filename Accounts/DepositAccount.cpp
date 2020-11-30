//
// Created by Alexey on 15.11.2020.
//

#include "DepositAccount.h"
#include "../Banks/BankSystem.h"


void DepositAccount::GetPercent() {
    float TrPercent = Banks[GetBankIDFromNumber(this->AccountId)]->percentPolitics.GetPercent(Sum);
    Transaction transaction = Transaction(this->Sum * TrPercent / 100, -1, this->AccountId,
            "Percent by using card", Interest);
    transaction.Do();
}
Transaction DepositAccount::Withdraw(int Sum) {
    if(this->Sum < Sum){
        Transaction transaction = Transaction(Sum, this->AccountId, -1, "Withdraw", NotEnoughMoney);
        return transaction;
    }
    time_t  now1 = time(0);
    tm* lt1 = localtime(&now1);
    if(IsFirstDateNewest(*lt1, *EndDepositTime)){
        Transaction transaction = Transaction(Sum, this->AccountId, -1, "Withdraw", NotDepositDateEnded);
        return transaction;
    }

    Transaction transaction1 = Transaction(Sum, this->AccountId, -1, "Withdraw", Successful);
    transaction1.Do();
    return transaction1;
}
Transaction DepositAccount::Transfer(int Sum, int ToAccount, string Comment) {
    if(this->Sum < Sum){
        Transaction transaction = Transaction(Sum, this->AccountId, ToAccount, "Withdraw", NotEnoughMoney);
        return transaction;
    }
    time_t  now1 = time(0);
    tm* lt1 = localtime(&now1);
    if(IsFirstDateNewest(*lt1, *EndDepositTime)){
        Transaction transaction = Transaction(Sum, this->AccountId, -1, "Withdraw", NotDepositDateEnded);
        return transaction;
    }
    Transaction transaction1 = Transaction(Sum, this->AccountId, ToAccount, Comment, Successful);
    transaction1.Do();
    return transaction1;
}
