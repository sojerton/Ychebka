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
    Car():typeFuel(true);
    void showType(){if(typeFuel)cout<<benzine_2<<endl;
                    else cout<<benzine_4<<endl;}
    ~Car(){}
};

class passenger cars : virtual public Car
{
public:
    
    
    class bus
    {
        
    };
};

class trucks : virtual public Car
{
public:
    
    
    
};





int main()
{
    setlocale(0, "rus");
    
    
    

    return 0;
}
