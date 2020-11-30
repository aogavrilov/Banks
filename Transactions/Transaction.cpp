//
// Created by Alexey on 15.11.2020.
//

#include <iostream>
#include "Transaction.h"
#include "../Banks/BankSystem.h"
void Transaction::Do(){
    if(From == -1){
        Banks[GetBankIDFromNumber(To)]->clients[GetClientIDFromNumber(To) - 1]->accounts[0]->Sum =
                Banks[GetBankIDFromNumber(To)]->clients[GetClientIDFromNumber(To) - 1]->accounts[0]->Sum + this->Sum;
        Banks[GetBankIDFromNumber(To)]->TransactionsHistory.push_back(this);
    }
    else if(To == -1){
        Banks[GetBankIDFromNumber(From)]->clients[GetClientIDFromNumber(From) - 1]->accounts[0]->Sum =
                Banks[GetBankIDFromNumber(From)]->clients[GetClientIDFromNumber(From) - 1]->accounts[0]->Sum - this->Sum;
        Banks[GetBankIDFromNumber(From)]->TransactionsHistory.push_back(this);
    }
    else{
        Banks[GetBankIDFromNumber(From)]->clients[GetClientIDFromNumber(From) - 1]->accounts[0]->Sum =
                Banks[GetBankIDFromNumber(From)]->clients[GetClientIDFromNumber(From) - 1]->accounts[0]->Sum - this->Sum;
        Banks[GetBankIDFromNumber(To)]->clients[GetClientIDFromNumber(To) - 1]->accounts[0]->Sum =
                Banks[GetBankIDFromNumber(To)]->clients[GetClientIDFromNumber(To) - 1]->accounts[0]->Sum + this->Sum;
        if(GetBankIDFromNumber(To) != GetBankIDFromNumber(From)){
            Banks[GetBankIDFromNumber(To)]->TransactionsHistory.push_back(this);
            Banks[GetBankIDFromNumber(From)]->TransactionsHistory.push_back(this);
        }
        else{
            Banks[GetBankIDFromNumber(From)]->TransactionsHistory.push_back(this);
        }
    }

}
int Transaction::Deny() {
    if(Banks[GetBankIDFromNumber(To)]->clients[GetClientIDFromNumber(To) - 1]->accounts[0]->Sum < this->Sum){
        Status = UnsuccessfulDenied;
        return 1;
    }
    Banks[GetBankIDFromNumber(To)]->clients[GetClientIDFromNumber(To) - 1]->accounts[0]->Sum =
            Banks[GetBankIDFromNumber(To)]->clients[GetClientIDFromNumber(To) - 1]->accounts[0]->Sum - this->Sum;
    Banks[GetBankIDFromNumber(From)]->clients[GetClientIDFromNumber(From) - 1]->accounts[0]->Sum =
            Banks[GetBankIDFromNumber(From)]->clients[GetClientIDFromNumber(From) - 1]->accounts[0]->Sum + this->Sum;
    Status = Denied;
    return 0;
}































