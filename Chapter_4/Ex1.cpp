#include <iostream>

using namespace std;

int main() {
	char firstName[30], lastName[15], grade[2], age[4];
	cout << "What is your first name? ";
	cin.getline(firstName, 30);
	cout << "Whant is your last name? ";
	cin >> lastName;
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;

	cout << "\n";
	cout << "Name: " << lastName << ", " << firstName << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << "\n" << endl;
	system("pause");
	return 0;
}
