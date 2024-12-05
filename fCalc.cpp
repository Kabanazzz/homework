#include <iostream>
using namespace std;
long long factorial(int n) {
	if (n < 0) {
		cout << "error, ! for negative numbers is not defined" << endl;
		return -1;
	}
	long long result = 1;
	for (int i = 1; i <= n; ++i) {
		result = i;
	}
	return result;
}
int main() {
	int a, b, choice; 
	cout << "select operation";
	cout << "1. +\n";
	cout << "2. -\n";
	cout << "3. *\n";
	cout << "4. !\n";
	cout << "number of operation";
	cin >> choice;
	if (choice >= 1 && choice <= 3) {
		cout << "first number";
		cin >> a;
		cout << "secont number";
		cin >> b;
	} else if (choice == 4) {
		cout << "number for !";
		cin >> a;
	}
	switch (choice) {
		case 1:
			cout << "result +" << a + b << endl;
			break;
		case 2:
			cout << "result -" << a - b << endl;
			break;
		case 3:
			cout << "result *" << a * b << endl;
			break;
		case 4:
			if (a >= 0)
				cout << "!" << a << " equels: " << factorial(a) << endl;
			break;
		default:
			cout << "error: incorrect selection of operation" << endl;
	}
	return 0;
}
 

