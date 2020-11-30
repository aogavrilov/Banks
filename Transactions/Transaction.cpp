//
// Created by Alexey on 15.11.2020.
//

#include "Transaction.h"
#include "../Banks/BankSystem.h"
void Transaction::Do(){
    if(From == -1){
        Banks[GetBankIDFromNumber(To)]->accounts[GetClientIDFromNumber(To)]->CountOfMoney =
                Banks[GetBankIDFromNumber(To)]->accounts[GetClientIDFromNumber(To)]->CountOfMoney + this->Sum;
        Banks[GetBankIDFromNumber(To)]->TransactionsHistory.push_back(this);
    }
    else if(To == -1){
        Banks[GetBankIDFromNumber(From)]->accounts[GetClientIDFromNumber(From)]->CountOfMoney =
                Banks[GetBankIDFromNumber(From)]->accounts[GetClientIDFromNumber(From)]->CountOfMoney - this->Sum;
        Banks[GetBankIDFromNumber(From)]->TransactionsHistory.push_back(this);
    }
    else{
        Banks[GetBankIDFromNumber(From)]->accounts[GetClientIDFromNumber(From)]->CountOfMoney =
                Banks[GetBankIDFromNumber(From)]->accounts[GetClientIDFromNumber(From)]->CountOfMoney - this->Sum;
        Banks[GetBankIDFromNumber(To)]->accounts[GetClientIDFromNumber(To)]->CountOfMoney =
                Banks[GetBankIDFromNumber(To)]->accounts[GetClientIDFromNumber(To)]->CountOfMoney + this->Sum;
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
    if(Banks[GetBankIDFromNumber(To)]->accounts[GetClientIDFromNumber(To)]->CountOfMoney < this->Sum){
        Status = UnsuccessfulDenied;
        return 1;
    }
    Banks[GetBankIDFromNumber(To)]->accounts[GetClientIDFromNumber(To)]->CountOfMoney =
            Banks[GetBankIDFromNumber(To)]->accounts[GetClientIDFromNumber(To)]->CountOfMoney - this->Sum;
    Banks[GetBankIDFromNumber(From)]->accounts[GetClientIDFromNumber(From)]->CountOfMoney =
            Banks[GetBankIDFromNumber(From)]->accounts[GetClientIDFromNumber(From)]->CountOfMoney + this->Sum;
    Status = Denied;
    return 0;
}































