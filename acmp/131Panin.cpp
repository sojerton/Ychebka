#include <iostream>
using namespace std;

int main() {
	int n; // ���������� �������
	int v, s; // ������� � ���
	cin >> n;
	int max = 0; // ������������ �������
	int k = 0;// �����
	for (int i = 0; i < n; i++)	// � ����� �� 0 �� n
	{
		cin >> v >> s;	//������ ���� �������
		if (v > max && s == 1){ //� ���� ������� ������ ������������� � ��� ������� �������� �������������
			max = v;
			k = i + 1;
		}
	}
	if (k == 0) k = -1;	//���� ����� �� ���� ������� ������� -1
	cout << k << endl; 
	system("pause");
	return 0;
}