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
		cout << " действительная часть числа: ";
		cin >> r;
		cout << "  мнимая часть числа: ";
		cin >> i;
		cout << "  введенное число: ";
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
		cout << "1-целочисленные" << endl;
		cout << "2-вещественные" << endl;
		cout << "0-Выход" << endl;
		cin >> t;
		if (t == 0) {
			break;
		}
		if (t < 1 || t>2) {
			cout << "Ошибка!" << endl;
			continue;
		}
		switch (t) {
		case 1:
			while (true) {
				cout << "1-Сложение" << endl;
				cout << "2-Умножение" << endl;
				cout << "3-Вычитание" << endl;
				cout << "0-Выход" << endl;
				cin >> v;
				if (v == 0) {
					break;
				}
				if (v < 1 || v>3) {
					cout << "Ошибка!" << endl;
					continue;
				}
				cout << "\nВведите первое число:\n";
				a.Vvod();
				cout << "\nВведите второе число:\n";
				b.Vvod();
				cout << endl;
				switch (v) {
				case 1:
					cout << "Сложение чисел: ";
					(a + b).Print();
					break;
				case 2:
					cout << "Умножение чисел: " << endl;
					(a * b).Print();
					break;
				case 3:
					cout << "Вычитание чисел: " << endl;
					(a - b).Print();
					break;
				}
			}
			break;
		case 2:
			while (true) {
				cout << "1-Сложение" << endl;
				cout << "2-Умножение" << endl;
				cout << "3-Вычитание" << endl;
				cout << "0-Выход" << endl;
				cin >> v;
				if (v == 0) {
					break;
				}
				if (v < 1 || v>3) {
					cout << "Ошибка!" << endl;
					continue;
				}
				cout << "\nВведите первое число:\n";
				c.Vvod();
				cout << "\nВведите второе число:\n";
				d.Vvod();
				cout << endl;
				switch (v) {
				case 1:
					cout << "Сложение чисел: ";
					(c + d).Print();
					break;
				case 2:
					cout << "Умножение чисел: " << endl;
					(c * d).Print();
					break;
				case 3:
					cout << "Вычитание чисел: " << endl;
					(c - d).Print();
					break;
				}
			}
			break;
		}
	}
	return 0;
}