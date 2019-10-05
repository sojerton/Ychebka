#include <iostream>
using namespace std;

int main() {
	int n; // количество жильцов
	int v, s; // возраст и пол
	cin >> n;
	int max = 0; // максимальный возраст
	int k = 0;// номер
	for (int i = 0;i<n;i++)
	{
		cin >> v >> s;
		if (v>max&&s == 1)
		{
			max = v;
			k = i + 1;
		}
	}
	if (k == 0) k = -1;
	cout << k << endl;
	system("pause");
	return 0;
}