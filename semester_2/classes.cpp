#include <iostream>
#include <string>

using namespace std;

static string army="English";
static string insurgents="Polish";

class Unit
{
public:
    int health;
    Unit():health(10){}
    Unit(int a): health(a){}
    Unit(const Unit &other){this->health=other.health;}
    void showHealth(){cout<<"Unit health: "<<health<<endl;};
    ~Unit(){}
};

class Soldier: virtual public Unit
{
protected:
    int speed;
public:
    int damage;
    Soldier():damage(20),speed(10){}
    Soldier(int a, int b, int c):Unit(a),damage(b),speed(c) { }
    void nation(){cout<<insurgents<<endl;}
    void showDamage(){cout<<"soldier damage: "<<damage<<endl;}
    void showSpeed(){cout<<"Soldier speed: "<<speed<<endl;}

    class citizen: virtual public Unit
    {
    public:
        void showHealth(){cout<<"hp fermer is: "<<health<<endl;}
    };

    ~Soldier(){}
};

class Horse: virtual public Unit
{
protected:
    int speed;
public:
    Horse():speed(20){}
    Horse(int a):speed(a){}
    void showSpeed(){cout<<"Horse speed: "<<speed<<endl;}
    ~Horse(){}
};

class Horseman :public Horse, public Soldier
{
private:
    int speed;
public:
    Horseman():speed(Horse::speed+Soldier::speed){}
    void nation(){cout<<army<<endl;}
    void showDamage(){cout<<"Horseman damage: "<<damage<<endl;}
    void showSpeed(){cout<<"Horseman speed: "<<speed<<endl;}
    ~Horseman(){}
};

class Battle :public Horseman
{
private:
    int Unit_1;
public:
    Battle():Unit_1(0){}
    Battle(int first): Unit_1(first){}
    void showBattle()
    {
        cout<<"zhannaDark caused "<<damage<<" damage."<<endl;
        cout<<"achilles left "<<Unit_1<<" hp."<<endl;
    }

    friend Battle operator- (Battle&l, Battle& u1);
    ~Battle(){}
};

Battle operator- (Battle&l, Battle& u1)
    {
        return Battle (l.Unit_1-u1.Unit_1);
    }

int main()
{
    Soldier achilles(49,5,15);
    achilles.nation();
    achilles.showHealth();
    achilles.showDamage();
    achilles.showSpeed();

    cout<<endl;
    Horse sivka(40);
    sivka.showHealth();
    sivka.showSpeed();
    cout<<endl;

    Horseman zhannaDark;
    zhannaDark.nation();
    zhannaDark.showHealth();
    zhannaDark.showDamage();
    zhannaDark.showSpeed();
    cout<<endl;
    Battle Unit1(achilles.health);
    Battle Unit2(zhannaDark.damage);
    Battle Unit3 = Unit1 - Unit2;
    Unit3.showBattle();
    cout<<endl;
    Soldier::citizen fermer;
    fermer.showHealth();
    
    return 0;
}
