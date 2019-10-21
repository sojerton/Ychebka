#include <iostream>
using namespace std;

int main() {
	int n; // количество жильцов
	int v, s; // возраст и пол
	cin >> n;
	int max = 0; // максимальный возраст
	int k = 0;// номер
	for (int i = 0; i < n; i++)	// в цикле от 0 до n
	{
		cin >> v >> s;	//вводим всех жильцов
		if (v > max && s == 1){ //и если возраст больше максимального и пол мужской заменяем максимального
			max = v;
			k = i + 1;
		}
	}
	if (k == 0) k = -1;	//если таких не было найдено выводим -1
	cout << k << endl; 
	system("pause");
	return 0;
}