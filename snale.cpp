#include <iostream>
using namespace std;

int main ()
{
	int a, b, num = 0;
	cout << "use any two numbers";
	cin >> a >> b;

	for (int i = 0; i < a; ++i) {
		if (i % 2 == 0) {
			for (int j = 0; j < b; ++j) {
				cout << num++ << " ";
			}
		} else {
			num += b - 1;
			for (int j = 0; j < b; ++j) {
				cout << num-- << " ";
			}
			num += b + 1;
		}
		cout << endl;
	}

return 0;
}
