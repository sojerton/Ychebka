#include <iostream>
using namespace std;

int main() {
	long long int a, b, x;	// ��� ������� ����� ���������� long
	cin >> x;	/������ x
	if (x % 2 == 0) { cout << "0 0" << endl; return 0; } //���� x ������ �� ������� ��������� �� ���������� ������� 
	else {	//�����
		a = x + 2;//� - ������ ��������� �������� ������ 
		b = 2; //b - ����������� 2 ���-��� �������� ����� �� ���������� �� ����
	}
	cout << a << " " << b << endl; //������� �����
	system("pause");
	return 0;
}
