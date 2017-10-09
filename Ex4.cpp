#include <iostream>
using namespace std;
void temperature(float);

int main()
{
	float degrees;
	cout << "Please enter a Celsius value: ";
	cin >> degrees;
	temperature(degrees);
	system("pause");
	return 0;
}

void temperature(float degrees)
{
	float num = 1.8 * degrees + 32;
	cout << degrees
		<< " degrees Celsius is " << num << " degrees Fahrenheit.\n\n";
}