//
// Created by Alexey on 14.11.2020.
//

#ifndef BANKS_CLIENTSSYSTEM_H
#define BANKS_CLIENTSSYSTEM_H

#include <string>

using namespace std;
enum ClientStatus{
    Unverified,
    Verified
};

class Client {
    string FirstName, SurName, MiddleName, Address;
    string PassportInfo;
    int PassportSeries, PassportNumber;
    ClientStatus Status;
public:
    Client(string FirstName, string SurName, string MiddleName) : FirstName(FirstName), SurName(SurName), MiddleName(MiddleName){};
    void AddAddress(string Address){ this->Address = Address; };
    void AddPassportInfo(string PassportInfo, int PassportSeries, int PassportNumber);
    void Verification();
};


#endif //BANKS_CLIENTSSYSTEM_H
