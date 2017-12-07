#include <iostream>
#include <string>

using namespace std;

struct marsh {
	char Start[30];
	char Fin[30];
	float Num;
};

int main(){
    const int SIZE = 2;
    marsh route[SIZE];
    setlocale(LC_ALL,"Russian");
    for (int i=0; i<SIZE; i++){
        cout << "Начало маршрута: ";
        cin.getline(route[i].Start, 30);
        cout << "Конец маршрута: ";
        cin.getline(route[i].Fin, 30);
        cout << "   Номер маршрута: ";
        cin >> route[i].Num;
        cout << endl;
        cin.get();
    }
int num;
    cout << "Введите номер маршрута: ";
    cin >> num;
    int  z=0;
    for (int i=0; i<SIZE; i++){
        if (route[i].Num==num){
        z=1;
        cout << "Начало маршрута: " << route[i].Start <<endl;
        cout << "Конец маршрута: " <<route[i].Fin << endl;
    break;
    }}
    if (z==0) cout << "Данного маршрута не существует." << endl;
	cin.get();
	return 0;
}
