#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
  char firstName, lastName, grade, age;
  cout << "What is your first name? ";
  cin.getline(firstName, 25);
  cout << "Whant is your last name? ";
  cin >> lastName >> endl;
  cout << "What letter grade do you deserve? ";
  cin >> grade >> endl;
  cout << "What is your age? ";
  cin >> age >> endl;
  
  cout << "Name: " << lastName << ", " << firstName << endl;
  cout << "Grade: " << grade << endl;
  cout << "Age: " << age;
  system("pause");
  return 0;  
}
