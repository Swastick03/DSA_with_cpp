#include <iostream>

using namespace std;
class Hero
{
private:
    int health;

public:
    char level = 'A';

    int gethealth()
    {
        return health;
    }
    void sethealth(int h)
    {
        health = h;
    }
};
int main()

{

    Hero h1;
    // cout << "Health is: " << h1.health << endl;
    cout << "Setting health " << endl;
    h1.sethealth(67);

    cout << "Health is: " << h1.gethealth() << endl;
    cout << "Level is: " << h1.level << endl;
    return 0;
}