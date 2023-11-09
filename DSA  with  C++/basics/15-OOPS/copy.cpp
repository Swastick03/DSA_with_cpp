#include <iostream>

using namespace std;

class Hero
{
private:
    string name;
    int age;

public:
    Hero(string name1)
    {
        name = name1;
    }
    // static int time;

    // static void random()
    // {
    //     cout << "This is from static function:  " << time << endl;
    // }
    // void setname(string name)
    // {
    //     this->name = name;
    // }
    Hero(Hero &hati, int a)
    {
        this->name = hati.name;
        this->age = a;
    }
    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << endl
             << endl;
    }
};

// int Hero ::time = 5;

int main()

{

    Hero h1("Swastick");
    h1.print();
    Hero h2(h1, 15); // object copy
    h2.print();
    // Hero h3 = h1;

    // h1.print();
    // h2.print();
    // h3.print();

    // h1.setname("Meena");

    // h1.print();
    // h2.print();
    // h3.print();

    return 0;
}