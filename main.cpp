#include <iostream>
#include "BankSystem.h"
bool IsFirstDateNewest(tm Date1, tm Date2){
    if(Date1.tm_year > Date2.tm_year)
        return 0;
    if((Date1.tm_year == Date2.tm_year) && (Date1.tm_mon > Date2.tm_mon))
        return 0;
    if((Date1.tm_year == Date2.tm_year) && (Date1.tm_mon == Date2.tm_mon) &&
       (Date1.tm_mday > Date2.tm_mday))
        return 0;
    return 1;
}

int main() {
    vector<BankSystem> Banks = {{1, "Sberbank"},  {2, "Tinkoff"}, {3, "Alfa-Bank"}};

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
