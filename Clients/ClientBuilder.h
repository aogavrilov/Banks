//
// Created by Alexey on 28.11.2020.
//

#ifndef BANKS_CLIENTBUILDER_H
#define BANKS_CLIENTBUILDER_H

#include <string>
#include "ClientsSystem.h"

using namespace std;

class ClientBuilder {
    string Name, SurName;
    string Address, PassportData;
    ClientStatus Status;
    bool IsBuildedAccount = false;
public:
    ClientBuilder();
    bool GetNameAndSurname();
    bool GetAddress();
    bool GetPassportInfo();
    Client* GetClient();

};


#endif //BANKS_CLIENTBUILDER_H
