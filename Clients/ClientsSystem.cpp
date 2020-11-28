//
// Created by Alexey on 14.11.2020.
//

#include "ClientsSystem.h"
void Client::AddPassportInfo(string PassportInfo){
    this->PassportInfo = PassportInfo;
};

void Client::Verification() {
    if((PassportInfo == "-") || (Address == "-"))
        Status = Unverified;
    else
        Status = Verified;
}