cmake_minimum_required(VERSION 3.15)
project(Banks)

set(CMAKE_CXX_STANDARD 14)

add_executable(Banks main.cpp BankSystem.cpp BankSystem.h ClientsSystem.cpp ClientsSystem.h Accounts/Account.cpp Accounts/Account.h Accounts/DebitAccount.cpp Accounts/DebitAccount.h Accounts/DepositAccount.cpp Accounts/DepositAccount.h Accounts/CreditAccount.cpp Accounts/CreditAccount.h Transaction.cpp Transaction.h)