#include <iostream>
using namespace std;
int main() {
	int n, a = 0, b = 1, c = 0, i = 0;
	cin >> n; //заданное число
	while (c<n) { //в цикле идем по числам фиббоначи
		a = b;//алгоритм
		b = c;
		c = a + b;
		i++;//порядковый номер числа
	}
	if (c == n)cout << 1 << endl << i; //выводим положительный ответ и номер числа
	else cout << 0;
	system("pause");
	return 0;
}