#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>

using namespace std;

struct catalog {
    char name[10];
    struct dataInf{int day, month, year;
    } data;
    int num;
    bool operator<(catalog in2)
{
   return (num < in2.num);
}
};

#define SIZE 3

void Menu(void){
    system("cls");
    cout << "memset(img, 0, sizeof(img))Меню"<<endl;
    cout << "1. Создание каталога."<<endl;
    cout << "2. Вывод каталога на экран."<<endl;
    cout << "3. Сортировка по дате."<<endl;
    cout << "4. Выборка по кол-ву обращений."<<endl;
    cout << "5. для выхода."<<endl;
}

main(){
    setlocale(LC_ALL,"rus");
    catalog in[SIZE];
    Menu();
    int key, p;
    cin >>key;
     int k=(SIZE+1);
    bool A=true;
    while (A==true){
        if (key<6 && key>0) {
            switch (key){
            case 1:
                    cout <<"Создание коталога...\n";
                        for (int i=0; i<SIZE; i++){
                            cout << "Введите имя файла: ";
                            cin >>  in[i].name;
                            cout << "Введите дату создания файла: \n";
                              cout << "День: "; cin>>in[i].data.day;
                              cout << "Месяц: "; cin>>in[i].data.month;
                              cout << "Год: "; cin>>in[i].data.year;
                            cout << "Введите кол-во обращений к файлу: ";
                            cin >> in[i].num;
                            cout<<endl;
                        }
                    Menu();
                    cin>>key;
                    break;
             case 2:
                for (int i=0; i<SIZE; i++){
                    cout<<"Файл №"<<i+1<<endl;
                    cout<<in[i].name<<endl;;
                    cout<<in[i].data.day<<"."<<in[i].data.month<<"."<<in[i].data.year<<endl;
                    cout<<in[i].num<<" Обращения.\n"<<endl;
                }
                cin>>key;
                break;
             case 3:
                cout<<"Введите дату для сортировки: ";
                  cout << "День: "; cin>>in[k].data.day;
                  cout << "Месяц: "; cin>>in[k].data.month;
                  cout << "Год: "; cin>>in[k].data.year;
                for (int i=0; i<SIZE; i++){
                    if (in[k].data.year>in[i].data.year)
                        if (in[k].data.month>in[i].data.month)
                            if (in[k].data.day>in[i].data.day)
                               memset(&in[i], 0, sizeof(catalog));
                }
                cin>>key;
                break;
             case 4:
                for (int i=1; i<SIZE; i++){
                    if (in[i-1].num>in[i].num)
                        in[k].num=in[i-1].num;
                        p=i-1;
                    }
                    cout<<"Файл №"<<p+1<<endl;
                    cout<<in[p].name<<endl;;
                    cout<<in[p].data.day<<"."<<in[p].data.month<<"."<<in[p].data.year<<endl;
                    cout<<in[p].num<<" Обращения.\n"<<endl;
                cin>>key;
                break;
              case 5:   exit(0);
            }
        }
    else {cout<<"Неверное значение"<<endl;
    A=false;}
    }
    cin.get();
    return 0;
}
