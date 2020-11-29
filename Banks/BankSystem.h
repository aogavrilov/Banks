//
// Created by Alexey on 14.11.2020.
//

#ifndef BANKS_BANKSYSTEM_H
#define BANKS_BANKSYSTEM_H

#include <vector>
#include "../Accounts/Account.h"
#include "../Clients/ClientsSystem.h"
int GetBankIDFromNumber(int number){return ((number % 1000000000000000) / 10000000000);}
int GetClientIDFromNumber(int number){return (number % 10000000000);}
using namespace std;
class BankSystem {
    vector<Client*> clients;
    string Name;
    int BankId;
public:
    BankSystem(int BankId, string Name) : BankId(BankId), Name(Name){};


    vector<Account*> accounts;
};
vector<BankSystem*> Banks;
#endif //BANKS_BANKSYSTEM_H
