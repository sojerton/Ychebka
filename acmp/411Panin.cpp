#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	float D, x1, x2, a, b, c;
	cin >> a >> b >> c;
	if (a)
	{
		D = b*b - 4 * a*c;
		if (D > 0)
		{
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			cout << 2 << endl;
			cout << fixed << setprecision(6) << x1 << endl;
			cout << fixed << setprecision(6) << x2 << endl;
		}
		else if (D == 0)
		{
			x1 = -b / (2 * a);
			cout << 1 << endl;
			cout << fixed << setprecision(6) << x1 << endl;
		}
		else
			cout << 0 << endl;
	}
	else if (a == 0 && b == 0 && c == 0)
	{
		cout << -1 << endl;
	}
	else if (a == 0 && b != 0)
	{
		x1 = -c / b;
		cout << 1 << endl;
		cout << fixed << setprecision(6) << x1 << endl;
	}
	else if (a == 0 && b == 0)
	{
		cout << 0 << endl;
	}
	else
	{
		return 0;
	}
	system("pause");
	return 0;
}