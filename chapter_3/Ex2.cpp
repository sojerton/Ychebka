#include <iostream>
#include <cmath>

using namespace std;
const int ft = 12;
const float mtr = 0.0254;
const float kg = 2.2;

int main()
{
	setlocale(LC_ALL, "Russian");
	int growthFoot, growthInch, weightPounds;
	cout << "������� ��� ���� � �����: __\b\b";
	cin >> growthFoot;
	cout << "������� ��� ���� � ������: __\b\b";
	cin >> growthInch;
	cout << "������� ��� ��� � ������: __\b\b";
	cin >> weightPounds;
	cout << "��� ������ ����� ���� (���): " << pow((growthFoot * ft + growthInch)*mtr, 2) / (weightPounds / kg) << endl;
	system("pause");
	return 0;
}