#include <iostream>

using namespace std;
const int ft = 12;

int main()
{
	setlocale(LC_ALL, "Russian");
	int growth;
	cout << "Enter your growth: ___\b\b\b";
	cin >> growth;
	cout << "Your growth: " << growth / ft << " foot and " << (growth % ft) << " inch\n";
	system("pause");
	return 0;
}
