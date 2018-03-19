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
    Car():typeFuel(true){}
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
    int Lenght;
    passengerCars():power(210), maxSpeed(190){}
    passengerCars(int a, int b, int c):power(a), maxSpeed(b), Lenght(c){}
    void  showPower(){cout<<"Power of engine: "<< power <<" l.s."<<endl;}
    void  showSpeed(){cout<<"Maximal Speed of car is: "<<maxSpeed<<endl;}
    ~passengerCars(){}
};

class trucks : virtual public Car
{
public:
    friend passengerCars;
    int CCapacity;
    int Tlenght;
    trucks():CCapacity(13), Tlenght(123){}
    trucks(bool a, int b, int c):Car(a), CCapacity(b), Tlenght(c){}
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
    int fullLenght=281;
    trailer():fullLenght(281){}
    trailer(int a):fullLenght(a){}
    friend trailer operator+ (trailer&l, trailer& r);
    void showSize(){cout<<"Full Lenght auto is: "<<fullLenght<<" sm"<<endl;}
    ~trailer(){}
};

trailer operator+ (trailer&l, trailer& r)
    {
        return trailer (l.fullLenght+r.fullLenght);
    }

int main()
{
    setlocale(0, "rus");

    passengerCars VAZ(210, 190, 467);
    VAZ.showType();
    VAZ.showPower();
    VAZ.showSpeed();
    cout<<endl;
    trucks KAMAZ(false, 18, 123);
    KAMAZ.showType();
    KAMAZ.showCC();
    cout<<endl;
    trucks::bus LIAZ;
    LIAZ.showType();
    LIAZ.showHC();
    cout<<endl;
    trailer vaz(VAZ.Lenght);
    trailer TR(KAMAZ.Tlenght);
    trailer VAZtr = TR + vaz;
    VAZtr.showSize();

    return 0;
}
