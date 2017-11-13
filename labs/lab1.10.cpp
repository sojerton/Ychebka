#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a,b,c,dX,Xn,Xk;
cout << "zadaite minim-e zna4enie, vvedite Xn= "; cin >> Xn;;
cout << "zadaite maxim-e zna4enie, vvedite Xk= "; cin >> Xk;
cout << "zadaite shag (dX) = "; cin >> dX;
cout << "vvedite a="; cin >> a;
cout << "vvedite b="; cin >> b;
cout << "vvedite c="; cin >> c;
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

