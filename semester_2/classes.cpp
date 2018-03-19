#include <iostream>
#include <string>

using namespace std;

static string benzine_1="80";
static string benzine_2="92";
static string benzine_3="95";
static string benzine_4="ДТ";

class Car
{
private:
    bool typeFuel;
public:
    int Lenght;
    Car():typeFuel(true), Lenght(427){}
    Car(bool a):typeFuel(a){}
    Car(const Car &other){this->typeFuel=other.typeFuel;} // конструктор копирования
    void showType(){if(typeFuel)cout<<benzine_2<<endl;
                    else cout<<benzine_4<<endl;}
    ~Car(){}
};

class passengerCars : virtual public Car
{
public:
    int power;
    int maxSpeed;
    passengerCars():power(210), maxSpeed(190){}
    passengerCars(int a, int b):power(a), maxSpeed(b){}
    void  showPower(){cout<<"Power of engine: "<< power <<" l.s."<<endl;}
    void  showSpeed(){cout<<"Maximal Speed of car is: "<<maxSpeed<<endl;}
    ~passengerCars(){}
};

class trucks : virtual public Car
{
public:
    friend passengerCars;
    int CCapacity;
    trucks():CCapacity(13){}
    trucks(bool a, int b):Car(a), CCapacity(b){}
    void showCC(){cout<<"Carrying capacity is: "<<CCapacity<<" tons"<<endl;}
    class bus : public Car
    {
    private:
        int HCapacity;
    public:
        bus():HCapacity(42){}
        bus(int a):HCapacity(a){}
        void showHC(){cout<<"Human capacity is: "<<HCapacity<<endl;}
        ~bus(){}
    };
    ~trucks(){}
};

class trailer: public Car, public trucks
{
public:
    int fullLenght;
    trailer():fullLenght(281){}
    trailer(int a):fullLenght(a){}
    void showSize(){cout<<"Full Lenght auto is: "<<fullLenght<<" sm"<<endl;}
    friend trailer operator+ (trailer&l, Car& u1);
    ~trailer(){}
};

trailer operator+ (trailer&l, Car& u1)//перегрузка оператора- для боя
    {
        return trailer (l.fullLenght+u1.Lenght);
    }

int main()
{
    setlocale(0, "rus");

    passengerCars VAZ;
    VAZ.showType();
    VAZ.showPower();
    VAZ.showSpeed();
    cout<<endl;
    trucks KAMAZ(false, 18);
    KAMAZ.showType();
    KAMAZ.showCC();
    cout<<endl;
    trucks::bus LIAZ;
    LIAZ.showType();
    LIAZ.showHC();
    cout<<endl;
    trailer vaz;
    trailer TR;
    trailer VAZtr;
    vaz.showType();
    vaz.showSize();
    vaz.showCC();


    VAZtr = TR + vaz;

    VAZtr.showSize();




    return 0;
}
