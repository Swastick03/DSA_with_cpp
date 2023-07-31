#include <iostream>
using namespace std;

int v = 10;

void a(int &i)
{

    cout << i << endl;
    cout << v << endl;
}

void b(int &i)
{
    cout << i << endl;
}

int main()

{

    int i = 5;
    a(i);
    b(i);
    return 0;
}