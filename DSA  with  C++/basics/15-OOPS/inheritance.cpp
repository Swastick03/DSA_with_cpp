#include <iostream>

using namespace std;
class Human
{
public:
    int age;
    int height;

    void setheight(int height)
    {
        this->height = height;
    }
};
class Male : public Human
{
public:
    int weight;

    void sleep()
    {
        cout << "Sleeping!" << endl;
    }
};

class Boy : protected Human
{
public:
    int count;

    void getheight()
    {
        cout << height << endl;
    }
};
int main()

{

    Boy b1;
    b1.getheight();

    // Male m1;
    // cout << m1.age << endl;
    // cout << m1.height << endl;
    // m1.setheight(70);
    // cout << m1.height << endl;
    // m1.sleep();

    return 0;
}