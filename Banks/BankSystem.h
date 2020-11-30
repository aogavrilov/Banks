//
// Created by Alexey on 14.11.2020.
//

#ifndef BANKS_BANKSYSTEM_H
#define BANKS_BANKSYSTEM_H

#include <vector>
#include "../Clients/ClientsSystem.h"
#include "PercentPolitics.h"

int static GetBankIDFromNumber(int number){return ((number % 1000000000000000) / 10000000000);}
int static GetClientIDFromNumber(int number){return (number % 10000000000);}
using namespace std;
class BankSystem {
    vector<Client*> clients;
    string Name;

public:
    int BankId;
    int Percent;
    PercentPolitics percentPolitics;
    vector<Transaction*> TransactionsHistory;
    BankSystem(int BankId, string Name, int Percent, PercentPolitics percentPolitics) : BankId(BankId), Name(Name),
    Percent(Percent), percentPolitics(percentPolitics){};
    void PayDay();
    void PayMonth();
    Client* AddClient(Client*);

    vector<Account*> accounts;
};
static vector<BankSystem*> Banks;
#endif //BANKS_BANKSYSTEM_H
