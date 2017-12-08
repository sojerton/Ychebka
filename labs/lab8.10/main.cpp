#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale>
 
using namespace std;

struct catalog {
    char name[3];
    char data[3];
    int num;
    catalog* next;
};

void Menu(void){
    system("cls");
    cout << "Меню"<<endl;
    cout << "1. Вывод каталога на экран."<<endl;
    cout << "2. Сортировка по дате."<<endl;
    cout << "3. Выборка по кол-ву обращений."<<endl;
    cout << "Esc для выхода."<<endl;
}

main(){
    setlocale(LC_ALL,"rus");
    srand(time(NULL));
    catalog in;
        in.name[3]={"qqq","www","eee"};
        in.num[3]={"11","23","3"};
        in.data[3]={"12.11.2012","19.03.2014","23.06.2013"};
    char key=0;
    Menu();
        switch (key){
        case '1';
            for (int i=0; i<3; i++){
                cin >>  in.name >>  in.num >> in.data;
            }
            break;
         case '2';
            
            break;
         case '3';
            
            break;
        }while ((key=getch())!="Esc");
   
   
    cin.get();
    return 0;
}
