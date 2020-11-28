//
// Created by Alexey on 14.11.2020.
//

#include "BankSystem.h"
int GetBankIDFromNumber(int number){
    return ((number % 1000000000000000) / 10000000000);
}