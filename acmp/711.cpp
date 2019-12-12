#include <iostream>
#include <string>
using namespace std;

int main() {
	long n, m, temp, sum = 100001, min;
	(cin >> n >> m).get();
	long *circle = new long[n];
	string *str = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> str[i];
		circle[i] = 0;
		for (int j = 0; j < m; j++) {
			(cin >> temp).get();
			circle[i] += temp;
		}
		if (sum > circle[i]) { sum = circle[i]; min = i; }
	}
	cout << str[min];
	system("pause");
	return 0;
}