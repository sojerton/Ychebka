#include <iostream>

using namespace std;
const int ft = 12;

int main()
{
	setlocale(LC_ALL, "Russian");
	int growth;
	cout << "������� ��� ����: ___\b\b\b";
	cin >> growth;
	cout << "��� ����: " << growth / ft << " ���(��) � " << (growth % ft) << " ����(��)\n";
	system("pause");
	return 0;
}
