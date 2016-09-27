#include <iostream>
#include "Account.h"

using namespace std;

int main() {
	Account a1;
	a1.Deposit(90);
	cout << "After deposit $90" << endl;
	for (auto s : a1.Report()) {
		cout << s << endl;
	}

	a1.Withdraw(50);
	if (a1.Withdraw(100)) {
		cout << "second withdraw succeeds" << endl;
	}
	cout << "After withdraw $50 then $100" << endl;

	for (auto s : a1.Report()) {
		cout << s << endl;
	}

	return 0;
}