#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct laptopInf {
    char model[21];
    int price;
    struct prop_size{
        float x,y,z;
    } prop;
    float w;        //weight
};

int main(int argc, char *argv[]){
    setlocale(LC_ALL,"rus");

    const int SIZE=16;
    char in[76];
    char a[15];
    laptopInf read[16];

    cout <<"считывание файла..."<<endl;
    ifstream fin("note.txt");
    for (int i=0; i<SIZE; i++){
    fin.getline(in, 76);

    strncpy(read[i].model, in, 19);

    strncpy(a, in + 19, 4);
    read[i].price = atoi(a);

    strncpy(a, in + 24, 3);
    read[i].w = atoi(a);

    strncpy(a, in + 28, 4);
    read[i].prop.x = atoi(a);

    strncpy(a, in + 33, 4);
    read[i].prop.y = atoi(a);

    strncpy(a, in + 38, 4);
    read[i].prop.z = atoi(a);
    i++;
    }
    fin.close();
    cout<<"запись в бинарный файл..."<<endl;
    ofstream fout("note.bin", ios::binary);
    for (int i=0; i<16; i++){
        fout<<read[i].model<<read[i].price<<read[i].w<<read[i].prop.x<<read[i].prop.y<<read[i].prop.z;
 }
    fout.close();
    cout<<"запись завершена"<<endl;
    cin.get();
	return 0;
}
