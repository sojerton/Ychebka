#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");							//a7=18		 a8=21									//b7=11
	int a[10001], an, a1 = 2, a2 = 3, a3 = 4, a4 = 7, a5 = 13, a6 = 15, b[10001], bn, b1 = 1, b2 = 5, b3 = 6, b4 = 8, b5 = 9, b6 = 10, n, it = 5;
	bool t = false;
	cin >> n;
	a[1] = a1; a[2] = a2; a[3] = a3; a[4] = a4; a[5] = a5; a[6] = a6;
	b[1] = b1; b[2] = b2; b[3] = b3; b[4] = b4; b[5] = b5; b[6] = b6;
	if (n == 1) { cout << a1 << endl; cout << b1; return 0; }
	if (n == 2) { cout << a2 << endl; cout << b2; return 0; }
	if (n == 3) { cout << a3 << endl; cout << b3; return 0; }
	if (n == 4) { cout << a4 << endl; cout << b4; return 0; }
	if (n == 5) { cout << a5 << endl; cout << b5; return 0; }
	if (n == 6) { cout << a6 << endl; cout << b6; return 0; }
	for (int i = 7; i <= n; i++) {
		a[i] = b[i - 1] + b[i - 3];
		bn = b[i - 1];
		t = false;
		while (!t) {
			if (bn < a[it]) {
				bn++;
				if (bn != a[it] && bn < a[it] && bn != a[it - 1] && bn != a[it - 2] && bn != a[it - 3] && bn != a[it - 4] && bn != a[it - 5]) { b[i] = bn; t = true; }
			}
			else { it++; }
		}
		if (i == n) { cout << a[i] << endl; cout << b[i] << endl; }
	}
	system("pause");
	return 0;
}
