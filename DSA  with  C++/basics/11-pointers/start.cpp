#include <iostream>

using namespace std;
int main()

{

    int num = 5;
    cout << "Num is:" << num << endl;
    cout << "Add is: " << &num << endl;

    int *ptr = &num;
    cout << "Value of num:" << *ptr << endl;
    cout << "Value of &num:" << ptr << endl;

    // initialise with zero pointer

    int i = 5;

    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;

    // pointer points to the number and doesnot make any cpoy

    int b = 5;
    int c = b;

    cout << "B ks address: " << &b << endl;
    cout << "C ka address" << &c << endl;
    cout << "The value of b before:" << b << endl;
    c++;
    cout << "The value of b after:" << b << endl;

    int *pq = &b;
    cout << "The value of b before:" << b << endl;
    (*pq)++;
    cout << "The value of b after:" << b << endl;

    // coping a pointer
    int **s = &pq;
    cout << s << " - " << pq << endl;
    cout << *s << " - " << *pq << endl;
    cout << **s << " - " << *pq << endl;

    return 0;
}