#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float km, liter;
	cout << "Enter the distance (in km): ";
	cin >> km;
	cout << "Enter the fuel consumption (in liters): ";
	cin >> liter;
	cout << "Fuel consumption per 100 km: " << (liter * 100) / km << endl;
	system("pause");
	return 0;
}
