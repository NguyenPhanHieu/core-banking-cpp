#include "account.hpp"

Account::Account() {
    balance = 0;
}

void Account::deposit(double amount) {
    balance += amount;
}
