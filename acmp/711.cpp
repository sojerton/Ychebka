#include <iostream>
#include <string>
using namespace std;

int main() {
	long n, m, temp, sum = 100001, min; //n,m - входные данные, temp - переменная времени каждого круга, sum - общая сумма времени кругов, min - индекс участника
	(cin >> n >> m).get(); //считываем первую строку
	long *circle = new long[n]; //сумма времени кругов(динамическая)
	string *str = new string[n]; //динамический массив строк участников
	for (int i = 0; i < n; i++) { 
		cin >> str[i]; //считываем имя
		circle[i] = 0; //обнуляем счетчик для каждого участника 
		for (int j = 0; j < m; j++) { //суммируем время
			(cin >> temp).get();
			circle[i] += temp;
		}
		if (sum > circle[i]) { sum = circle[i]; min = i; } //если бщее время меньше минимального обновляем
	}
	cout << str[min]; //выводим участника с минимальным временем
	system("pause");
	return 0;
}