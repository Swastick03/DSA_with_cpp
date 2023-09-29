#include <iostream>

using namespace std;

class Hero
{
private:
    string name;
    int *age;

public:
    static int time;

    static void random()
    {
        cout << "This is from static function:  " << time << endl;
    }
    Hero(string name1, int age1)
    {
        name = name1;
        *age = age1;
    }
    void setname(string name)
    {
        this->name = name;
    }
    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << endl
             << endl;
    }
};

int Hero ::time = 5;

int main()

{

    cout << Hero::time << endl;
    Hero::random();

    // Hero h1("Swastick", 18);
    // Hero h2(h1);
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