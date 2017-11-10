#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;


int main()
{
setlocale(LC_ALL, "Russian");
double a,b,c,d,F,dX,g,x,Xn,Xk;
cout << "zadaite minim-e zna4enie, vvedite Xn= "; cin >> Xn;;
cout << "zadaite maxim-e zna4enie, vvedite Xk= "; cin >> Xk;
cout << "zadaite shag (dX) = "; cin >> dX;
cout << "vvedite a="; cin >> a;
cout << "vvedite b="; cin >> b;
cout << "vvedite c="; cin >> c;
    for(x=Xn;x<=Xk;x=x+dX)
    {
        int ac=(int)a;
        int bc=(int)b;
        int cc=(int)c;
        if ((x<3)&&(b!=0))
            if(!(ac||bc)&&(ac^cc)!=0)
                cout << (F=pow(a*x,2)-b*x+c) << endl;
            else
                cout<<"zna4enie F1= "<<int (F=((a*x)^2)-b*x+c)<<endl;

        else
            if((x>3)&&(b==0))
                if(!(ac||bc)&&(ac^cc)!=0)
                    cout << (F=(x-a)/(x-c)) << endl;
                else
                    cout << "zna4enie F2= " << int (F=(x-a)/(x-c))<<endl;

            else
                if(!(ac||bc)&&(ac^cc)!=0)
                    cout << (F=x/c) << endl;
                else
                    cout << "zna4enie F3= "<<int (F=x/c)<<endl;

    }

return 0;
}
