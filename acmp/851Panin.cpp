#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> m >> n;
	bool girl = true;
	bool girl2 = false;
	bool boy = false;
	while (n || m) {
		if (girl) {
			if (n) {
				cout << 'G';
				n--;
			}
			girl = false;
			girl2 = true;
		}
		if (girl2) {
			if (n) {
				cout << 'G';
				n--;
			}
			girl2 = false;
			boy = true;
		}
		if (boy) {
			if (m) {
				cout << 'B';
				m--;
			}
			girl = true;
			boy = false;
		}
	}
	system("pause");
}
