#include <iostream>

using namespace std;

int main() {
	int n, k = 0, answer;
	char str[256];
	cin >> n;
	answer = n;
	cin >> str;
	k = strlen(str);
	for (int i = n; i >= 1; i -= k) {
		if (i != n)answer *= i;
	}
	cout << answer;
	system("pause");
	return 0;
}
