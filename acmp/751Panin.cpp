#include <iostream>
using namespace std;

int main() {
	long long int a, b, x;	// для больших чисел используем long
	cin >> x;	/вводим x
	if (x % 2 == 0) { cout << "0 0" << endl; return 0; } //если x четное то выводим сообщение об отсутствии решения 
	else {	//иначе
		a = x + 2;//а - делаем следующим нечетным числом 
		b = 2; //b - присваиваем 2 так-как нечетное число не разделится на него
	}
	cout << a << " " << b << endl; //выводим ответ
	system("pause");
	return 0;
}
