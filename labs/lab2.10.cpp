#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale>

using namespace std;

#define SIZE 8

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int num[SIZE];

    for(int i=0; i<SIZE; i++){
        num[i] = 0 + rand() % 10;
        cout << num[i] << "     ";
    }

    cout << endl;
    int numMin, sum=0, a=0;

    for(int i=0; i<SIZE; i++){
        if (abs(num[i])<numMin) numMin=abs(num[i]);
        if (num[i]==0) a=1;
        if (a==1) sum += abs(num[i]);
    }
    cout <<"Минимальное элемент по модулю: " << numMin << endl;
    cout <<"Сумма модулей элементов: " << sum << endl;

    for (int i=0; i<SIZE; i++){
       if (i%2==1) cout << num[i] <<"     ";
    }
    for (int i=0; i<SIZE; i++){
       if (i%2==0) cout << num[i] <<"     ";
    }

cin.get(); cin.get();
return 0;
}
