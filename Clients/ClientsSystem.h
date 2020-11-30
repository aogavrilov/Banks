//
// Created by Alexey on 14.11.2020.
//

#ifndef BANKS_CLIENTSSYSTEM_H
#define BANKS_CLIENTSSYSTEM_H


#include "../Accounts/Account.h"
#include <vector>
using namespace std;
enum ClientStatus{
    Unverified,
    Verified
};

class Client {
    string FirstName, SurName, Address;
    string PassportInfo;
    ClientStatus Status;
public:
    vector<Account*> accounts;
    int ClientID = 0;
    Client(string FirstName, string SurName) : FirstName(FirstName), SurName(SurName){};
    void AddAddress(string Address){ this->Address = Address; };
    void AddPassportInfo(string PassportInfo);
    Client* Verification();
};


#endif //BANKS_CLIENTSSYSTEM_H
