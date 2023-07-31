#include <iostream>

using namespace std;
int main()

{

    int arr[10] = {3, 5, 7, 2, 5, 6};

    // cout << "The address of 1st element is: " << arr << endl;
    // cout << "The address of 1st element is: " << &arr[0] << endl;

    // cout << "Print:" << *arr << endl;
    // cout << "Print:" << *arr + 1 << endl;
    // cout << "Print:" << *(arr + 1) << endl;

    // int i = 3;
    // cout << i[arr] << endl;

    // array vs pointer

    // cout << sizeof(arr) << endl;
    // cout << &arr << endl;

    // int *ptr = arr;
    // cout << *ptr << endl;
    // cout << ptr << endl;

    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(ptr) << endl;

    // Array , Pointer  vs & operator

    // cout << &arr[0] << endl;
    // cout << &arr << endl;
    // cout << arr << endl;

    // int *p = arr;

    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;

    // arr = arr + 1;          // show error as array address cant be changed
    cout << arr << endl;

    int *p = arr;
    cout << p << endl;
    cout << *p << endl;

    p = p + 1;

    cout << p << endl;
    cout << *p << endl;
    return 0;
}