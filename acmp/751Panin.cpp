#include <iostream>
using namespace std;

int main() {
	long long int a, b, x;
	cin >> x;
	if (x % 2 == 0) { cout << "0 0" << endl; return 0; }
	else {
		a = x + 2;
		b = 2;
	}
	cout << a << " " << b << endl;
	system("pause");
	return 0;
}
