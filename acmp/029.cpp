#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a[3], i, n, p = 0, d = 0, t;
	cin >> n;
	if (n > 1) {
		cin >> a[0] >> a[1];
		d = abs(a[1] - a[0]);

		for (i = 2; i < n; i++) {
			cin >> a[2];
			if (abs(a[1] - a[2]) + d < 3 * abs(a[0] - a[2]) + p) {
				p = d;
				d += abs(a[1] - a[2]);
			}
			else {
				t = d;
				d = 3 * abs(a[0] - a[2]) + p;
				p = t;
			}
			a[0] = a[1];
			a[1] = a[2];
		}
	}
	cout << d;
	return 0;
}