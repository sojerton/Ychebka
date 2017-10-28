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
	cout << "Enter your growth in foots: __\b\b";
	cin >> growthFoot;
	cout << "Enter your growth in inch: __\b\b";
	cin >> growthInch;
	cout << "Enter your weight in pounds: __\b\b";
	cin >> weightPounds;
	cout << "Your body mass index (BMI): " << pow((growthFoot * ft + growthInch)*mtr, 2) / (weightPounds / kg) << endl;
	system("pause");
	return 0;
}
