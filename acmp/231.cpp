#include <iostream>
#include <string>
using namespace std;
int main() {
	string str, bukvi;
	int k = 0, out = 0;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] > 47 && str[i] < 58) { k = k * 10 + (str[i] - 48); }
		if (str[i] > 64 && str[i] < 91) {
			if (k == 0) {
				bukvi.insert(bukvi.end(), str[i]);
			}
			if (k != 0) {
				bukvi.insert(bukvi.end(), k, str[i]);
				k = 0;
			}
		}
	}
	for (int i = 0; i < bukvi.length(); i++) {
		out++;
		if (out != 40)
			cout << bukvi[i];
		else {
			cout << bukvi[i] << endl; out = 0;
		}
	}
	system("pause");
	return 0;
}