//
// Created by Alexey on 14.11.2020.
//

#ifndef BANKS_ACCOUNT_H
#define BANKS_ACCOUNT_H

#include <time.h>
#include "../Transactions/Transaction.h"

using namespace std;
enum AccountType{
    CREDITACCOUNT,
    DEBITACCOUNT,
    DEPOSITACCOUNT
};
bool static IsFirstDateNewest(tm Date1, tm Date2){
    if(Date1.tm_year > Date2.tm_year)
        return 0;
    if((Date1.tm_year == Date2.tm_year) && (Date1.tm_mon > Date2.tm_mon))
        return 0;
    if((Date1.tm_year == Date2.tm_year) && (Date1.tm_mon == Date2.tm_mon) &&
       (Date1.tm_mday > Date2.tm_mday))
        return 0;
    return 1;
}
class Account {
protected:

    int ClientId;
    int Sum;


public:
    int AccountId;
    int Percent;
    int InterestOnTheBalance = 0;
    AccountType accountType;
    Account(int AccountId, int ClientId, int Percent, int Sum) : AccountId(AccountId), ClientId(ClientId),
        Percent(Percent), Sum(Sum){};
    int CountOfMoney;
    Transaction Withdraw(int Sum){};
    Transaction Deposit(int Sum);
    Transaction Transfer(int Sum, int ToAccount, string Comment){};


};


#endif //BANKS_ACCOUNT_H
