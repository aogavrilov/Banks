//
// Created by Alexey on 29.11.2020.
//

#ifndef BANKS_ACCOUNTBUILDER_H
#define BANKS_ACCOUNTBUILDER_H


#include "../Banks/BankSystem.h"

class AccountBuilder {
    Client* client;
    AccountType accountType;
    BankSystem* bank;
    int Sum;
public:
    AccountBuilder(Client* client, AccountType accountType, BankSystem* bank, int Sum) : client(client), accountType(accountType), bank(bank), Sum(Sum){};
    Account* AccountBuild();
};


#endif //BANKS_ACCOUNTBUILDER_H
