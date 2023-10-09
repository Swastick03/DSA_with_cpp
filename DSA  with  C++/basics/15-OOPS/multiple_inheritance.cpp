#include <iostream>

using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void speak()
    {
        cout << "Speaking" << endl;
    }
    void bark()
    {
        cout << "Barking 1" << endl;
    }
};

class Dome
{
public:
    int sum;

    void bark()
    {
        cout << "Barking 2" << endl;
    }
};

class Labro : public Animal, public Dome
{
};

int main()

{

    Labro l;
    l.speak();
    l.Dome::bark();

    cout << l.age << endl;
    cout << l.sum << endl;

    return 0;
}