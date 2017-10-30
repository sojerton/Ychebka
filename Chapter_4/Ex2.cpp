#include <iostream>

using namespace std;

struct CandyBar {
	char name[20];
	float weight;
	int calories;

};

int main() {
	struct CandyBar snack = { "Mocha Munch", 2.3, 350 };

	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Calories: " << snack.calories << endl;
	system("pause");
	return 0;
}