//
// Created by Alexey on 14.11.2020.
//

#ifndef BANKS_BANKSYSTEM_H
#define BANKS_BANKSYSTEM_H

#include <vector>
#include "../Accounts/Account.h"
#include "../Clients/ClientsSystem.h"

using namespace std;
class BankSystem {
    vector<Account> accounts;
    vector<Client> clients;
    string Name;
    int BankId;
public:
    BankSystem(int BankId, string Name) : BankId(BankId), Name(Name){};


};

#endif //BANKS_BANKSYSTEM_H
