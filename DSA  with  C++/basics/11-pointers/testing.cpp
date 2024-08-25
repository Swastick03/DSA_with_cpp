#include <iostream>

using namespace std;
int main()

{

    int b = 5;
    int c = b;

    cout << "b is: " << b << endl;
    cout << "c is: " << c << endl;

    b++;

    cout << "b is: " << b << endl;
    cout << "c is: " << c << endl;

    int *ptr = &b;

    cout << "b is: " << b << endl;
    cout << "ptr is: " << *ptr << endl;
    cout << "b add: " << &ptr << endl;

    (*ptr)++;

    int **ptr1 = &ptr;

    cout << " ptr1: " << **ptr1 << endl;

    cout << "b is: " << b << endl;
    cout << "ptr is: " << *ptr << endl;

    return 0;
}