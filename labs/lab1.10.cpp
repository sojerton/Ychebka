#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a,b,c,dX,Xn,Xk;
cout << "задайте минимальное значение, введите Xn= "; cin >> Xn;;
cout << "задайте максимальное значение, введите Xk= "; cin >> Xk;
cout << "задайте шаг (dX) = "; cin >> dX;
cout << "введите a="; cin >> a;
cout << "введите b="; cin >> b;
cout << "введите c="; cin >> c;
    if (!( int(a) | int(b)) && ( int(a) ^ int(c)) !=0) {
        for( double x=Xn;x<=Xk;x=x+dX){
            double F;
            if (x<3 && b!=0) F=pow(a*x,2)-b*x+c;
            else if (x>3 && b==0) F=(x-a)/(x-c);
            else F=x/c;
            cout << "x = " << x << "\tf = " << F << endl;
        }
    }
    else{
        for(double x = Xn; x <= Xk; x += dX) {
            int F;
            if (x<3 && b!=0) F=pow(a*x,2)-b*x+c;
            else if (x>3 && b==0) F=(x-a)/(x-c);
            else F=x/c;
            cout << "x = " << x << "\tf = " << F << endl;
        }
    }
return 0;
}

