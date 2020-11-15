//
// Created by Alexey on 14.11.2020.
//

#include "ClientsSystem.h"
void Client::AddPassportInfo(string PassportInfo, int PassportSeries, int PassportNumber){
    this->PassportInfo = PassportInfo;
    this->PassportSeries = PassportSeries;
    this->PassportNumber = PassportNumber;
};

void Client::Verification() {
    if((PassportInfo == "-") || (Address == "-") || (PassportSeries == -1)
    || (PassportNumber == -1))
        Status = Unverified;
    else
        Status = Verified;
}