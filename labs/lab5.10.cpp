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
        cout << "������ ��������: ";
        cin.getline(route[i].Start, 30);
        cout << "����� ��������: ";
        cin.getline(route[i].Fin, 30);
        cout << "   ����� ��������: ";
        cin >> route[i].Num;
        cout << endl;
        cin.get();
    }
int num;
    cout << "������� ����� ��������: ";
    cin >> num;
    int  z=0;
    for (int i=0; i<SIZE; i++){
        if (route[i].Num==num){
        z=1;
        cout << "������ ��������: " << route[i].Start <<endl;
        cout << "����� ��������: " <<route[i].Fin << endl;
    break;
    }}
    if (z==0) cout << "������� �������� �� ����������." << endl;
	cin.get();
	return 0;
}
