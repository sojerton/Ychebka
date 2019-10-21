#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
//функция меню
void Menu(int &point) {
	system("cls"); //очищает экран 
	cout << "1. add call" << endl;
	cout << "2. delete call by id" << endl;
	cout << "3. show list" << endl;
	cout << "4. sort list by date" << endl;
	cout << "5. show from date to date" << endl;
	cout << "6. show from duration to duration" << endl;
	cout << "7. sort by from" << endl;
	cout << "8. sort by to" << endl;
	cin >> point;
}

//объявление используемых функций
int Add(vector<string> &abonent, int &id),
Delete(vector<string> &abonent),
Show(vector<string> &abonent),
SortDate(vector<string> &abonent),
DateToDate(vector<string> &abonent),
DurToDur(vector<string> &abonent),
SortFrom(vector<string> &abonent),
SortTo(vector<string> &abonent);

int main() {
	int point, size = 6, id = 1;
	string  from, to, date, time, dur;
	vector<string> abonent;	//список будем хранить в векторе для удобного оперерывания с данными

	setlocale(LC_ALL, "Russian");
	Menu(point);

	while (point >= 1 && point <= 8) {
		switch (point) {
		case 1:
			system("cls");
			cin.get();	//считываем любое нажатие клавиши
			Add(abonent, id);
			Menu(point);
			break;
		case 2:
			system("cls");
			Delete(abonent);
			Menu(point);
			break;
		case 3:
			system("cls");
			cin.get();
			Show(abonent);
			Menu(point);
			break;
		case 4:
			system("cls");
			SortDate(abonent);
			Menu(point);
			break;
		case 5:
			system("cls");
			DateToDate(abonent);
			Menu(point);
			break;
		case 6:
			system("cls");
			DurToDur(abonent);
			Menu(point);
			break;
		case 7:
			system("cls");
			SortFrom(abonent);
			Menu(point);
			break;
		case 8:
			system("cls");
			SortTo(abonent);
			Menu(point);
			break;
		}
	}
	system("pause");
	return 0;
}

int Add(vector<string> &abonent, int &id) {//для добавления берем адрес вектора и последний id который будем инкрементить
	string from, to, date, time, dur;

	cout << "insert from: "; getline(cin, from);//считываем данные с клавиатуры
	cout << "insert to: ";  getline(cin, to);
	cout << "insert date: ";  getline(cin, date);
	cout << "insert time: ";  getline(cin, time);
	cout << "insert duration: ";  getline(cin, dur);

	abonent.push_back(to_string(id));//добавляем нового абонента в конец вектора
	abonent.push_back(from);
	abonent.push_back(to);
	abonent.push_back(date);
	abonent.push_back(time);
	abonent.push_back(dur);
	id++;//для следующего абонента id увеличиваем
}

int Show(vector<string> &abonent) {//вывод всего списка
	for (int i = 0; i<abonent.size(); i++) {
		cout << abonent.at(i) << "\t";//выводим значения в векторе абонентов
		if ((i + 1) % 6 == 0 && i != 0) cout << endl; //каждые 6 элементов - новый абонент, => переносим строку
	}
	system("pause");
}

int Delete(vector<string> &abonent) {//удаление по id
	int _id, it = 0;
	cout << "Введеите id вызова который хотите удалить: "; cin >> _id;
	try {
		for (int i = 0; i<abonent.size(); i += 6) {	//берем интервал в 6 значений(один абонент)
			if (abonent.at(i) == to_string(_id)) {
				abonent.erase(abonent.begin() + i, abonent.begin() + (i + 6));//удаляем 6 значений принадлежащих к одному абоненту
			}
		}
	}
	catch (const std::out_of_range& oor) {}	//при выходе за рамки масиива ловим ошибку

	system("pause");
}

int SortDate(vector<string> &abonent) {//сортировка по дате
	int data0, data, n, m;
	string temp[6];
	div_t d1, d2;
	istringstream ss(abonent.at(3));//переводим значение даты в числовой формат и записываем в переменную
	while (ss) {
		ss >> data0;
	}
	for (int i = 0; i<abonent.size(); i += 6) {//идем с интервалом по абонентам в 6 элементов
		for (int j = 0; j<6; j++) {	//записываем все поля абонента во временную переменную
			temp[j] = abonent.at(i + j);
		}
		istringstream iss(temp[3]);	//переводим  значение поля даты проверяемого абонента в числовой формат и записываем в переменную
		while (iss) {
			iss >> data;
		}
		n = data % 100;	//берем от числа первые 2 значения(год)
		m = data0 % 100;
		if (n<m) {
			d1 = div(data, 100);//берем от числа вторые 2 значения(месяц)
			d2 = div(data0, 100);
			n = d1.quot % 100;
			m = d2.quot % 100;
			if (n<m) {
				d1 = div(data, 10000);//берем от числа третьи 2 значения(день)
				d2 = div(data0, 10000);
				n = d1.quot;
				m = d2.quot;
				if (n<m) {
					abonent.at(i) = abonent.at(i - 6);	//если проверяемая дата меньше то меняем абонетов местами
					abonent.at(i + 1) = abonent.at(i - 5);
					abonent.at(i + 2) = abonent.at(i - 4);
					abonent.at(i + 3) = abonent.at(i - 3);
					abonent.at(i + 4) = abonent.at(i - 2);
					abonent.at(i + 5) = abonent.at(i - 1);

					abonent.at(i - 6) = temp[0];
					abonent.at(i - 5) = temp[1];
					abonent.at(i - 4) = temp[2];
					abonent.at(i - 3) = temp[3];
					abonent.at(i - 2) = temp[4];
					abonent.at(i - 1) = temp[5];
				}
			}
		}
	}
}

int DateToDate(vector<string> &abonent) {//вывод в определенном интервале дат
	int start, fin, n, m, temp, lis;
	div_t d1;
	cout << "Insert from date: "; cin >> start;
	cout << "Insert to date: "; cin >> fin;
	for (int i = 0; i<abonent.size(); i += 6) {	//идем с интервалом по абонентам в 6 элементов
		n = start % 100;	//берем год от заданных дат
		m = fin % 100;
		istringstream ss(abonent.at(i + 3));//сравниваем с проверяемым абонентом
		while (ss) {
			ss >> temp;
		}
		lis = temp % 100;	//если подходит то выводим
		if (lis>n && lis<m) {
			cout << abonent.at(i) << "\t";
			cout << abonent.at(i + 1) << "\t";
			cout << abonent.at(i + 2) << "\t";
			cout << abonent.at(i + 3) << "\t";
			cout << abonent.at(i + 4) << "\t";
			cout << abonent.at(i + 5) << "\t";
			cout << endl;
		}
		else {	//если нет то проверяем по месяцу
			d1 = div(start, 100);
			n = d1.quot % 100;
			d1 = div(fin, 100);
			m = d1.quot % 100;
			d1 = div(temp, 100);
			lis = d1.quot % 100;
			if (lis>n && lis<m) {
				cout << abonent.at(i) << "\t";
				cout << abonent.at(i + 1) << "\t";
				cout << abonent.at(i + 2) << "\t";
				cout << abonent.at(i + 3) << "\t";
				cout << abonent.at(i + 4) << "\t";
				cout << abonent.at(i + 5) << "\t";
				cout << endl;
			}
			else {	//если нет проверяем по дню
				d1 = div(start, 10000);
				n = d1.quot % 100;
				d1 = div(fin, 10000);
				m = d1.quot % 100;
				d1 = div(temp, 10000);
				lis = d1.quot % 100;
				if (lis>n && lis<m) {
					cout << abonent.at(i) << "\t";
					cout << abonent.at(i + 1) << "\t";
					cout << abonent.at(i + 2) << "\t";
					cout << abonent.at(i + 3) << "\t";
					cout << abonent.at(i + 4) << "\t";
					cout << abonent.at(i + 5) << "\t";
					cout << endl;
				}
			}
		}
	}
	system("pause");
}

int DurToDur(vector<string> &abonent) {//вывод в итервале продолжительности разговора
	int start, fin, lis;
	cout << "Insert from duration: "; cin >> start;
	cout << "Insert to duration: "; cin >> fin;
	for (int i = 0; i<abonent.size(); i += 6) {
		istringstream ss(abonent.at(i + 5));
		while (ss) {
			ss >> lis;
		}
		if (lis>start && lis<fin) {	//при вхождении поля duration у абонента в заданный интервал выводим все поля абонента
			cout << abonent.at(i) << "\t";
			cout << abonent.at(i + 1) << "\t";
			cout << abonent.at(i + 2) << "\t";
			cout << abonent.at(i + 3) << "\t";
			cout << abonent.at(i + 4) << "\t";
			cout << abonent.at(i + 5) << "\t";
			cout << endl;
		}
	}
	system("pause");
}

int SortFrom(vector<string> &abonent) {	//сортировка по отправителю
	string from;
	cout << "Insert from: "; cin >> from;
	for (int i = 0; i<abonent.size(); i += 6) {
		if (abonent.at(i + 1) == from) {	//если поле from у проверяемого абонента идентично заданному выводим все поля абонента
			cout << abonent.at(i) << "\t";
			cout << abonent.at(i + 1) << "\t";
			cout << abonent.at(i + 2) << "\t";
			cout << abonent.at(i + 3) << "\t";
			cout << abonent.at(i + 4) << "\t";
			cout << abonent.at(i + 5) << "\t";
			cout << endl;
		}
	}
	system("pause");
}

int SortTo(vector<string> &abonent) { // сортировка по адресату
	string to;
	cout << "Insert to: "; cin >> to;
	for (int i = 0; i<abonent.size(); i += 6) {
		if (abonent.at(i + 2) == to) {	//если поле to у проверяемого абонента идентично заданному выводим все поля абонента
			cout << abonent.at(i) << "\t";
			cout << abonent.at(i + 1) << "\t";
			cout << abonent.at(i + 2) << "\t";
			cout << abonent.at(i + 3) << "\t";
			cout << abonent.at(i + 4) << "\t";
			cout << abonent.at(i + 5) << "\t";
			cout << endl;
		}
	}
	system("pause");
}