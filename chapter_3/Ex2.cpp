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
	cout << "¬ведите ваш рост в футах: __\b\b";
	cin >> growthFoot;
	cout << "¬ведите ваш рост в дюймах: __\b\b";
	cin >> growthInch;
	cout << "¬ведите ваш вес в фунтах: __\b\b";
	cin >> weightPounds;
	cout << "¬аш индекс массы тела (»ћ“): " << pow((growthFoot * ft + growthInch)*mtr, 2) / (weightPounds / kg) << endl;
	system("pause");
	return 0;
}