#include <iostream>

using namespace std;

struct pizza {
	char name[25];
	float diameter;
	float weight;

	void print() {
		cout << "\nName of company : " << name << "\n"
			 << "Pizza diameter: " << diameter << "\n"
			 << "pizza weight: " << weight << endl;
	}
};

int main(){
	pizza *ps = new pizza;
	cout << "Enter pizza diameter: \n";
	cin >> ps->diameter;
	cout << "Enter name of company: ";
	cin.get();
	cin.getline(ps->name, 25);
	cout << "Enter pizza weight: ";
	cin >> ps->weight;
	ps->print();
	system("pause");
	return 0;
}