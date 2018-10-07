#include <iostream>
#include <vector>
#include <string>


using namespace std;

void Menu(int &point) {
	system("cls");
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


int Add(vector<vector<string>> &abonent, vector<int> &list, int &count, int &id),
	Delete(),
	Show(vector<vector<string>> abonent, vector<int> list);
//	SortDate(), DateToDate(), DurToDur(), SortFrom(), SortTo();

int main(){
	int point, size=6, count=1, id=1;
	string  from, to, date, time, dur;
	
	vector<int> list;
	vector<vector<string>> abonent;
	//abonent.resize(10000);
	Menu(point);
	
	while (point >= 1 && point <= 8){
		switch (point){
		case 1:
			system("cls");
			cin.get();
			Add(abonent, list, count, id);
			Menu(point);
			break;
		case 2:
			system("cls");
			//Delete();
			Menu(point);
			break;
		case 3:
			system("cls");
			cin.get();
			Show(abonent, list);
			Menu(point);
			break;
		case 4:
			system("cls");
			//SortDate();
			Menu(point);
			break;
		case 5:
			system("cls");
			//DateToDate();
			Menu(point);
			break;
		case 6:
			system("cls");
			//DurToDur();
			Menu(point);
			break;
		case 7:
			system("cls");
			//SortFrom();
			Menu(point);
			break;
		case 8:
			system("cls");
			//SortTo();
			Menu(point);
			break;
		}
	}
	system("pause");
	return 0;
}

int Add(vector<vector<string>> &abonent, vector<int> &list, int &count, int &id) {
	string from, to, date, time, dur;

	cout << "insert from: "; getline(cin, from);
	cout << "insert to: ";  getline(cin, to);
	cout << "insert date: ";  getline(cin, date);
	cout << "insert time: ";  getline(cin, time);
	cout << "insert duration: ";  getline(cin, dur);
	/*
	abonent.at(count).push_back(to_string(id));
	abonent.at(count).push_back(from);
	abonent.at(count).push_back(to);
	abonent.at(count).push_back(date);
	abonent.at(count).push_back(time);
	abonent.at(count).push_back(dur);
	id++;
	*/

	abonent.resize(count);
	abonent[count].resize(6);
	abonent[count][0] = to_string(id);
	abonent[count][1] = from;
	abonent[count][2] = to;
	abonent[count][3] = date;
	abonent[count][4] = time;
	abonent[count][5] = dur;
	id++;

	list.push_back(count);
	count++;
}

int Show(vector<vector<string>> abonent, vector<int> list) {
	//for (vector<int>::iterator it = list.begin(); it != list.end();it++) cout << *it << " \n";
		//cout << "==================\n";
	
	for (vector<int>::iterator it2 = list.begin(); it2 != list.end(); it2++) {
	for (vector<string>::iterator it = (abonent.at(distance(list.begin(), it2))).begin(); it != (abonent.at(distance(list.begin(), it2)).end()); it++) {
	cout << *it << "   "; //Получаем все числа по по порядку
	}
	}
	
	system("pause");
	return false;
}

//void Delete(); {

//}
