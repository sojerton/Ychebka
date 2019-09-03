#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float n, a;
	float pi = 3.14159265358979323846;
	cin >> n >> a;
	if ((a / (2.0*sin((360.0 / (2.0*n))*pi / 180.0))) - (a / (2.0*tan((360.0 / (2.0*n))*pi / 180.0)))<1.0)cout << "YES";
	else cout << "NO";
	return 0;
}