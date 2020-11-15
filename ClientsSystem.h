//
// Created by Alexey on 14.11.2020.
//

#ifndef BANKS_CLIENTSSYSTEM_H
#define BANKS_CLIENTSSYSTEM_H

#include <string>

using namespace std;

class Client {
    string FirstName, SurName, MiddleName, Address;
    string PassportInfo;
    int PassportSeries, PassportNumber;
public:
    Client(string FirstName, string SurName, string MiddleName) : FirstName(FirstName), SurName(SurName), MiddleName(MiddleName){};
    void AddAdress(string Address){ this->Address = Address; };
    void AddPassportInfo(string PassportInfo, int PassportSeries, int PassportNumber);

};


#endif //BANKS_CLIENTSSYSTEM_H
