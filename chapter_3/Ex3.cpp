#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float km, liter;
	cout << "������� ���������� (� ����������): ";
	cin >> km;
	cout << "������� ������ ������� (� ������): ";
	cin >> liter;
	cout << "������ ������� �� 100 ����������: " << (liter * 100) / km << endl;
	system("pause");
	return 0;
}