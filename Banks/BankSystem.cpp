//
// Created by Alexey on 14.11.2020.
//

#include "BankSystem.h"
void BankSystem::PayDay() {//InterestOnTheBalance
    //
    for(auto client : clients){
        for(auto account : client->accounts){
            if(account->accountType == CREDITACCOUNT)
                continue;
            account->InterestOnTheBalance +=account->CountOfMoney * account->Percent / 365;
        }
    }
}
void BankSystem::PayMonth() {//InterestOnTheBalance
    //
    for(auto client : clients){
        for(auto account : client->accounts){
            if(account->accountType == CREDITACCOUNT)
                continue;
            account->CountOfMoney += account->InterestOnTheBalance;
            account->InterestOnTheBalance = 0;
        }
    }
}
Client* BankSystem::AddClient(Client* client) {
    client->ClientID = clients.size()+1;
    clients.push_back(client);
    return client;
}
vector<BankSystem*> Banks;