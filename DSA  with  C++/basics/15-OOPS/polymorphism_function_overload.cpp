#include <iostream>

using namespace std;
class A
{
public:
    void bark()
    {
        cout << "Barking" << endl;
    }
    void bark(int n)
    {
        cout << "Barking " << n << endl;
    }
    void bark(string name) // different type of argument
    {
        cout << "Barking " << name << endl;
    }
    void bark(int n, int m) // different no of argument
    {
        cout << "Barking  " << n * m << endl;
    }
};
int main()

{

    A a;
    a.bark();
    a.bark(5);
    a.bark("Dog");
    a.bark(5, 6);
    return 0;
}