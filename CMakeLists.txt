cmake_minimum_required(VERSION 3.15)
project(Banks)

set(CMAKE_CXX_STANDARD 14)

add_executable(Banks main.cpp Banks/BankSystem.cpp Banks/BankSystem.h Clients/ClientsSystem.cpp Clients/ClientsSystem.h Accounts/Account.cpp Accounts/Account.h Accounts/DebitAccount.cpp Accounts/DebitAccount.h Accounts/DepositAccount.cpp Accounts/DepositAccount.h Accounts/CreditAccount.cpp Accounts/CreditAccount.h Transactions/Transaction.cpp Transactions/Transaction.h Clients/ClientBuilder.cpp Clients/ClientBuilder.h Clients/AccountBuilder.cpp Clients/AccountBuilder.h Banks/PercentPolitics.cpp Banks/PercentPolitics.h)