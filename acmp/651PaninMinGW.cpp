#include <iostream>
#include <algorithm>
using namespace std;

long int n, m, i, p, g;

void f(long int t) { // делим каждое число на НОД
	t /= g; // и производим факторизацию
	for (i = 2; i * i <= t; i++)
		while (t % i == 0) {
			t /= i;
			p++;
		}
	p += t > 1;
}

int main() {
	cin >> n >> m;
	g = __gcd(n, m);
	f(n);
	f(m);
	cout << p;
}