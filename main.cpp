#include <iostream>
#include "Clients/AccountBuilder.h"
int main() {
    PercentPolitics percentPolitics = PercentPolitics({50000, 100000, 200000}, {3, 3.5, 4});
    vector<BankSystem> Banks = {{1, "Sberbank", 3, percentPolitics},  {2, "Tinkoff", 5, percentPolitics}, {3, "Alfa-Bank", 6, percentPolitics}};
    Client* client = new Client("Petya", "Pupkin");
    Client* client2 = new Client("Vasya", "Pupkin");
    Banks[0].AddClient(client);
    Banks[0].AddClient(client2);
    AccountBuilder accountBuilder = AccountBuilder(client, CREDITACCOUNT, &Banks[0], 1000000);
    Account* client1Account = accountBuilder.AccountBuild();
    accountBuilder = AccountBuilder(client2, CREDITACCOUNT, &Banks[0], 10050000);
    Account* client2Account = accountBuilder.AccountBuild();
    Transaction transaction1 = client1Account->Transfer(150, client2Account->AccountId, "For cake");
    Transaction transaction2 = client1Account->Withdraw(150);
    std::cout << "All is OK!" << std::endl;
    return 0;
}
//Делаем 1 транзакцию, вторую и отменяем 1
//Настройки банков