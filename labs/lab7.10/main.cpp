#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
    setlocale(LC_ALL,"rus");

    ifstream fin("file.dat");
    char stroka[70];
    while (!fin.eof()){
        fin.getline(stroka, 70);
        cout << stroka <<endl;
    }
    fin.close();

    cin.get();
    int word=0, sent=0;

    ifstream finw("file.dat");
    while (!finw.eof()){
        int counter=0;
        finw.getline(stroka, 70);
        while (stroka[counter]!='\0'){
            if (stroka[counter]!=' '){
               counter++;
            }
            else if (stroka[counter]==' '){
                word++;
                counter++;
            }
        }
    }
    finw.close();

    ifstream fins("file.dat");
    while (!fins.eof()){
        int counter=0;
        fins.getline(stroka, 70);
        while (stroka[counter]!='\0'){
            if (stroka[counter]!='.'){
               counter++;
            }
            else if (stroka[counter]=='.'){
                sent++;
                counter++;
            }
        }
    }
    fins.close();

    cout << "Предложений в тексте: " << sent << endl;
    cout << "Слов в тексте: " << word << endl;
    cin.get();
	return 0;
}
