//
// Created by Alexey on 28.11.2020.
//

#include <iostream>
#include "ClientBuilder.h"
bool ClientBuilder::GetAddress() {
    string Address;
    cout << "Введите ваш адрес(для пропуска введите ''-''): ";
    cin >> Address;
    this->Address = Address;
    if(Address == "-")
        return 0;
    return 1;
}
bool ClientBuilder::GetPassportInfo() {
    string PassportInfo;
    cout << "Введите ваши паспортные данные(для пропуска введите ''-''): ";
    cin >> PassportInfo;
    this->PassportData = PassportInfo;
    if(PassportInfo == "-")
        return 0;
    return 1;
}
bool ClientBuilder::GetNameAndSurname() {
    string Name, SurName;
    cout << "Введите ваши имя и фамилию: ";
    cin >> Name >> SurName;
    this->Name = Name;
    this->SurName = SurName;
    return 1;
}
ClientBuilder::ClientBuilder(){
    Status = Unverified;
    GetNameAndSurname();
    if(GetAddress() && GetPassportInfo())
        Status = Verified;
    IsBuildedAccount = true;
}
Client* ClientBuilder::GetClient() {
    if(!IsBuildedAccount)
        throw("except");//to MyExcept
    Client* client = new Client(this->Name, this->SurName);
    client->AddPassportInfo(this->PassportData);
    client->AddAddress(this->Address);
    client->Verification();
    return client;

}