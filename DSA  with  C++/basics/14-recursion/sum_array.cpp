#include <iostream>

using namespace std;
int sum(int *arr, int size)
{
    if (size == 0)
        return 0;

    return *arr + sum(arr + 1, size - 1);
}
int main()

{

    int arr[7] = {2, 7, 33, 4, 6, 7, 5};
    cout << "The sum of all num are: " << sum(arr, 7);
    return 0;
}