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
};

class Labro : public Dog
{
};
int main()

{

    Labro l;
    l.speak();
    cout << l.age << endl;
    return 0;
}