#include <iostream>

using namespace std;

struct CandyBar {
	char name[20];
	float weight;
	int calories;

	void print() {
		cout << "Name: " << name << "\n"
			<< "Weight: " << weight << "\n"
			<< "Calories: " << calories << "\n\n";
	}
};
int main() {
	struct CandyBar snack[3] = {
		{ "Mocha Munch", 2.3, 350 },
		{ "Snack2", 2.8, 450 },
		{ "Snack3",2.6, 270 }
	};

	for (int i = 0; i < 3; i++)
		snack[i].print();
	system("pause");
	return 0;
}