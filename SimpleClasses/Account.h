#pragma once
#include <string>
#include <vector>
#include "Transaction.h"


class Account {
private:
	int balance;
	std::vector<Transaction> log;
public:
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool Withdraw(int amt);
};
