#include <iostream>

using namespace std;
void update(int *p)
{
    *p = *p + 4;
}
void print(int *q)
{
    cout << q << endl;
    cout << *q << endl;
}

int Sum(int arr[5], int size)
{

    cout << endl
         << "Size inside funct: " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}
int main()

{

    // int i = 5;
    // int *p = &i;
    // cout << p << endl;
    // print(p);

    // cout << *p << endl;
    // update(p);
    // cout << *p << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Size: " << sizeof(arr) << endl;

    cout << "Sum is: " << Sum(arr + 2, 3) << endl;

    return 0;
}