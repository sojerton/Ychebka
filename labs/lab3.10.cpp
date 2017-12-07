#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale>

using namespace std;

#define SIZE 10

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int a[SIZE][SIZE], sum=0;
    for (int i=0; i<SIZE; i++){
        for (int j=0; j<SIZE; j++){
            a[i][j]= 0 + rand() % 10;
            cout << a[i][j] << "    ";
        }
    cout << endl;
    }
    int counter=0;
    for (int i=0; i<SIZE; i++){
        for (int j=0; j<SIZE; j++){
            int  value=a[i][j], sum=0;
            if (i>0 && i<9 && value>a[i-1][j]
                && value>a[i+1][j]) sum+=1;
            if (j>0 && j<9 && value>a[i][j-1]
                && value>a[i][j+1]) sum+=1;
            if (value>a[i-1][j-1] && value>a[i-1][j+1]
                && value>a[i+1][j-1] && value>a[i+1][j+1]) sum+=1;
            if (sum==3) counter+=1;
        }
    }
    cout <<"Локальных минимумов: " << counter <<endl;
    cin.get();
return 0;
}
