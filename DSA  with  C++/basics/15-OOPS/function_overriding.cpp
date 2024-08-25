#include <iostream>

using namespace std;

class Parent
{

    virtual void hello()
    {
        cout << "Hello from parent";
    }
};

class Child : public Parent
{
public:
    void hello()
    {
        cout << "Hello from Child";
    }
};

int main()

{

    Parent p;
    // Child d;
    // d.hello();
    p.hello();
    return 0;
}