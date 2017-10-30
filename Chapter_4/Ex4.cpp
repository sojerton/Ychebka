#include <iostream>

using namespace std;

struct pizza {
	char nameCompany[30];
	float diameter;
	float weight;

	void print() {
		cout << "\nName of company : " << nameCompany << "\n"
			 << "Pizza diameter: " << diameter << "\n"
			 << "pizza weight: " << weight << endl;
	}
};

int main(){
	pizza order;
	cout << "Enter name of company: ";
	cin.getline(order.nameCompany, 30);
	cout << "Enter pizza diameter: ";
	cin >> order.diameter;
	cout << "Enter pizza weight: ";
	cin >> order.weight;

	order.print();
	system("pause");
	return 0;
}