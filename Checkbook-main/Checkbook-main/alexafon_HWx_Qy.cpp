#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Question 2

//Check class 
class Check {
public:
	static int allChecks;
	int CheckNum;
	string CheckMemo;
	float CheckAmount;

	Check() : CheckNum(0), CheckMemo(" "), CheckAmount(0) {}

	int getCheckNum() {
		return CheckNum;
	}
	void setCheckNum(int num) {
		CheckNum = num;
	}
	string getCheckMemo() {
		return CheckMemo;
	}
	void setCheckMemo(string& memo) {
		CheckMemo = memo;
	}
	float getCheckAmount() {
		return CheckAmount;
	}
	void setCheckAmount(float amount) {
		CheckAmount = amount;
	}
};

//Checkbook class
class Checkbook {
public:
	static const int N = 5;
	static int allChecks;
	float balance;
	Check checks[N];
	float lastDeposit;
	int numofChecks;
	const int checkLimit;
// 1st initializer
	Checkbook() : balance(0), numofChecks(0), checkLimit(N) {}
// 2nd initializer 
	Checkbook(float initial_balance) : balance(initial_balance), numofChecks(0), checkLimit(N) {}
// deposit function
	void deposit(float amount) {
		balance += amount;
		lastDeposit = amount;
	}
// display check function
	void displayChecks() {
		for (int i = numofChecks - 1; i >= 0; i--) {
			cout << checks[i].getCheckAmount() << " " << checks[i].getCheckNum() << " " << checks[i].getCheckMemo() << endl;
		}
	}
// write check function
	bool writeCheck(float amount) {
		if (amount <= balance && numofChecks < N && allChecks < 10) {
			balance -= amount;
			cout << "memo?" << endl;
			cin >> checks[numofChecks].CheckMemo;
			checks[numofChecks].CheckNum = numofChecks;
			checks[numofChecks].CheckAmount = amount;
			numofChecks++;
			allChecks++;

			return true;
		}
		return false;
	}

	static int getallChecks() {
		return allChecks;
	}
};

int Checkbook::allChecks = 0;

int main() {
	Checkbook cb1(1000), cb2(500);
	for (int i = 0; i < 8; i++) {
		cb1.writeCheck(150);
		cb2.writeCheck(130);
	}
	cout << "cb1 check details" << endl;
	cb1.displayChecks();
	cout << "cb2 check details" << endl;
	cb2.displayChecks();
	cout << cb1.getallChecks() << endl;
	cout << cb2.getallChecks() << endl;
}
// Question 1 
// struct Check {
//	int CheckNum;
//	string CheckMemo;
//	float CheckAmount;
//};

//class Checkbook {
//private:
//	float balance;
//	Check checks[N];
//	float lastDeposit;
//	int numofChecks;
//	const int checkLimit;
//public:
//	Checkbook() : balance(0), numofChecks(0), checkLimit(N) {
//	}
//	Checkbook(float initial_balance) : balance(initial_balance), numofChecks(0), checkLimit(N) {
//	}
//	void deposit(float amount) {
//		balance += amount;
//		lastDeposit = amount;
//	}
//	void displayChecks() {
//		for (int i = numofChecks - 1; i >= 0, i--;) {
//			cout << "Check Number" << checks[i].CheckNum << ": " << checks[i].CheckMemo << ", $" << checks[i].CheckAmount << endl;
//		}
//	}
//	bool writeCheck(float amount) {
//		if (balance >= amount) {
//			int cb = numofChecks;
//			checks[cb].CheckNum = numofChecks;
//			cout << "Enter Check Memo" << endl;
//			cin >> checks[cb].CheckMemo;
//			cout << "Enter Check Amount" << endl;
//			cin >> checks[cb].CheckAmount;
//
//			balance -= amount;
//			numofChecks++;
//			return true;
//		}
//		else {
//			cout << "ERROR FUNDS INSUFFICIENT" << endl;
//			return false;
//		}
//	}
//};


//int main() {
//	Checkbook checkbook(1000);
//
//	cout << "Writing check (300)" << endl;
//	if (checkbook.writeCheck(500)) {
//		cout << "Check written" << endl;
//	}
//	else {
//		cout << "ERROR!" << endl;
//	}
//	cout << "Writing check (300)" << endl;
//	if (checkbook.writeCheck(300)) {
//		cout << "Check written" << endl;
//	}
//	else {
//		cout << "ERROR!" << endl;
//	}
//
//	cout << "Displaying checks:" << endl;
//	checkbook.displayChecks();
//
//	return 0;
//}