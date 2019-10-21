#include <iostream>
#include <cmath>	//��������� ��� �������������� ������
#include <iomanip>	//���������� ��� ������� setprecision()
using namespace std;

int main() {
	float D, x1, x2, a, b, c;
	cin >> a >> b >> c;	//������ ����������� ��� ����������
	if (a)	//���� a ����������
	{
		D = b*b - 4 * a*c; //���� ������������ �� �������
		if (D > 0)	//���� �� ������ ����
		{
			x1 = (-b + sqrt(D)) / (2 * a); //������� 2 �����
			x2 = (-b - sqrt(D)) / (2 * a);
			cout << 2 << endl;
			cout << fixed << setprecision(6) << x1 << endl;	//������� �� � �������� �� 6 ������
			cout << fixed << setprecision(6) << x2 << endl;
		}
		else if (D == 0)	//���� ������������ = 0
		{
			x1 = -b / (2 * a); //������� � ������� ������������ ������
			cout << 1 << endl;
			cout << fixed << setprecision(6) << x1 << endl;
		}
		else cout << 0 << endl; // ����� ������� 0 
	}
	else if (a == 0 && b == 0 && c == 0) // � ������ ���� ��� ��-�� = 0
	{
		cout << -1 << endl;	// ������ ���������� �����, ������� -1
	}
	else if (a == 0 && b != 0)	//� ������ ���� � = 0, a b ���
	{
		x1 = -c / b;	//������� ������������ ������ � ������� ���
		cout << 1 << endl;
		cout << fixed << setprecision(6) << x1 << endl;
	}
	else if (a == 0 && b == 0)	 //� ������ ���� ������ 2 ����������� = 0 ������� 0
	{
		cout << 0 << endl;
	}
	else //� ��������� ������� ����������� ���������
	{
		return 0;
	}
	system("pause");
	return 0;
}