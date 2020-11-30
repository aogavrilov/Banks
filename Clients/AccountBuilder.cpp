//
// Created by Alexey on 29.11.2020.
//

#include "AccountBuilder.h"
#include "../Accounts/CreditAccount.h"
#include "../Accounts/DepositAccount.h"
#include "../Accounts/DebitAccount.h"

Account* AccountBuilder::AccountBuild() {//Client* client, AccountType accountType, BankSystem* bank
    Account* account;
    switch (accountType){
        case CREDITACCOUNT:{
            account = new CreditAccount(bank->BankId * 10000 + int(accountType) * 1000 + client->ClientID,
                                  client->ClientID, bank->Percent, Sum);
            account->accountType = CREDITACCOUNT;
            break;
        }
        case DEPOSITACCOUNT:{
            account = new DepositAccount(bank->BankId * 10000 + int(accountType) * 1000 + client->ClientID,
                                  client->ClientID, bank->Percent, Sum);
            account->accountType = DEPOSITACCOUNT;
            break;
        }
        case DEBITACCOUNT:{
            account = new DebitAccount(bank->BankId * 10000 + int(accountType) * 1000 + client->ClientID,
                                  client->ClientID, bank->Percent, Sum);
            account->accountType = DEBITACCOUNT;
            break;
        }
    }

    client->accounts.push_back(account);
    return account;
}