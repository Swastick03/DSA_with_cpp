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
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Speaking Not" << endl; // method overriding
    }
};
int main()

{

    Dog l;
    l.speak();
    cout << l.age << endl;
    return 0;
}