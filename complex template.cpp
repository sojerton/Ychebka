#include <iostream>
using namespace std;

template <typename T>
class Complex {
private:
	T r, i;
public:
	Complex() : r(0.0), i(0.0) { }
	Complex(T ar, T ai) : r(ar), i(ai) { }

	void Vvod() {
		cout << " �������������� ����� �����: ";
		cin >> r;
		cout << "  ������ ����� �����: ";
		cin >> i;
		cout << "  ��������� �����: ";
		Print();
	}
	void Print() {
		cout << r << "+i*";
		if (i<0) {
			cout << "(" << i << ")";
		}
		else {
			cout << i;
		}
		cout << endl;
	}

	friend Complex operator+(Complex<T> a, Complex<T> b) {
		return Complex(a.r + b.r, a.i + b.i);
	}
	friend Complex operator-(Complex<T> a, Complex<T> b) {
		return Complex(a.r - b.r, a.i - b.i);
	}
	friend Complex operator*(Complex<T> a, Complex<T> b) {
		return Complex(a.r * b.r - a.i * b.i, a.r * b.i + a.i * b.r);
	}
};

int main() {
	int v = 1, t = 1;
	setlocale(LC_ALL, "Russian");
	Complex<int> a, b;
	Complex<double> c, d;
	while (true) {
		cout << "1-�������������" << endl;
		cout << "2-������������" << endl;
		cout << "0-�����" << endl;
		cin >> t;
		if (t == 0) {
			break;
		}
		if (t < 1 || t>2) {
			cout << "������!" << endl;
			continue;
		}
		switch (t) {
		case 1:
			while (true) {
				cout << "1-��������" << endl;
				cout << "2-���������" << endl;
				cout << "3-���������" << endl;
				cout << "0-�����" << endl;
				cin >> v;
				if (v == 0) {
					break;
				}
				if (v < 1 || v>3) {
					cout << "������!" << endl;
					continue;
				}
				cout << "\n������� ������ �����:\n";
				a.Vvod();
				cout << "\n������� ������ �����:\n";
				b.Vvod();
				cout << endl;
				switch (v) {
				case 1:
					cout << "�������� �����: ";
					(a + b).Print();
					break;
				case 2:
					cout << "��������� �����: " << endl;
					(a * b).Print();
					break;
				case 3:
					cout << "��������� �����: " << endl;
					(a - b).Print();
					break;
				}
			}
			break;
		case 2:
			while (true) {
				cout << "1-��������" << endl;
				cout << "2-���������" << endl;
				cout << "3-���������" << endl;
				cout << "0-�����" << endl;
				cin >> v;
				if (v == 0) {
					break;
				}
				if (v < 1 || v>3) {
					cout << "������!" << endl;
					continue;
				}
				cout << "\n������� ������ �����:\n";
				c.Vvod();
				cout << "\n������� ������ �����:\n";
				d.Vvod();
				cout << endl;
				switch (v) {
				case 1:
					cout << "�������� �����: ";
					(c + d).Print();
					break;
				case 2:
					cout << "��������� �����: " << endl;
					(c * d).Print();
					break;
				case 3:
					cout << "��������� �����: " << endl;
					(c - d).Print();
					break;
				}
			}
			break;
		}
	}
	return 0;
}