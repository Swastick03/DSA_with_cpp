#include <iostream>

using namespace std;

bool isSorted(int *arr, int size)
{

    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
    {
        return false;
    }
    return isSorted(arr + 1, size - 1);
}
int main()

{

    int arr[7] = {2, 5, 6, 7, 8, 88, 23};

    if (isSorted(arr, 7))
    {
        cout << "The array is Sorted!" << endl;
    }
    else
    {
        cout << "The array is not sorted !" << endl;
    }

    return 0;
}