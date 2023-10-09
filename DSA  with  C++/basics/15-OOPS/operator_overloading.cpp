#include <iostream>

using namespace std;

class B
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    void operator+(B &obj) // + operator overloading
    {
        int v1 = this->a;
        int v2 = obj.a;
        cout << "Output: " << v2 - v1 << endl;
    }

    void operator()() //() overloading
    {
        cout << "Bracket is called " << this->a << endl;
    }
};
int main()

{
    B oj1, oj2;

    oj1.a = 6;
    oj2.a = 9;

    oj1 + oj2;

    oj2();

    return 0;
}