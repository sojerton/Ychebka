#include <iostream>
using namespace std;

int main() {
	//n - девочки, m - мальчики
	int n, m;
	cin >> m >> n;
	bool girl = true;
	bool girl2 = false;
	bool boy = false;
	//  в цикле уменьшаем n и m на единицу когда рассаживаем участников
	while (n || m) {
		//сначала рассаживаем девочек
		if (girl) {
			if (n) {
				cout << 'G';
				n--;
			}
			// когда первую девочку посадили ищем вторую 
			girl = false;
			girl2 = true;
		}
		//после того как посадим вторую девочку ставим следующего в очередь мальчика
		if (girl2) {
			if (n) {
				cout << 'G';
				n--;
			}
			girl2 = false;
			boy = true;
		}
		//после мальчика вновь ищем девочку
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
