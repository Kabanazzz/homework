#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float P, R, I;
	int T;

	cout << "suma ";
	cin >> P;
	cout << "priod ";
	cin >> T;
	cout << "procent ";
	cin >> R;

	I = (P * T * R) / 100;

	cout << fixed << setprecision(2);
	cout << "float " << I << endl;
	cout << "int " << static_cast<int>(I) << endl;
	return 0;
}
