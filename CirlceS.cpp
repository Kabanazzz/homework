#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	double r;
	const double pi = 3.14;
	
	cout << "r";
	cin >> r;

	double area = pi * r * r;
	double circumference = 2 * pi * r;
	
	cout << fixed << setprecision(2);
	cout << "AREA" << area << endl;
	cout << "circle lengt" << circumference << endl;
	return 0;
}
