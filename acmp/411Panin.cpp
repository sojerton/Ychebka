#include <iostream>
#include <cmath>	//библитека для математических формул
#include <iomanip>	//библиотека для функции setprecision()
using namespace std;

int main() {
	float D, x1, x2, a, b, c;
	cin >> a >> b >> c;	//вводим коэфициенты при неивестных
	if (a)	//если a существует
	{
		D = b*b - 4 * a*c; //ищем дискриминант по формуле
		if (D > 0)	//если он больше нуля
		{
			x1 = (-b + sqrt(D)) / (2 * a); //находим 2 корня
			x2 = (-b - sqrt(D)) / (2 * a);
			cout << 2 << endl;
			cout << fixed << setprecision(6) << x1 << endl;	//выводим их с точнотью до 6 знаков
			cout << fixed << setprecision(6) << x2 << endl;
		}
		else if (D == 0)	//если дискриминант = 0
		{
			x1 = -b / (2 * a); //находим и выводим единственный корень
			cout << 1 << endl;
			cout << fixed << setprecision(6) << x1 << endl;
		}
		else cout << 0 << endl; // иначе выводим 0 
	}
	else if (a == 0 && b == 0 && c == 0) // в случае если все ко-ты = 0
	{
		cout << -1 << endl;	// корней бесконечно много, выводим -1
	}
	else if (a == 0 && b != 0)	//в случае если а = 0, a b нет
	{
		x1 = -c / b;	//находим единственный корень и выводим его
		cout << 1 << endl;
		cout << fixed << setprecision(6) << x1 << endl;
	}
	else if (a == 0 && b == 0)	 //в случае если первые 2 коэфициента = 0 выводим 0
	{
		cout << 0 << endl;
	}
	else //в остальных случаях заканчиваем программу
	{
		return 0;
	}
	system("pause");
	return 0;
}