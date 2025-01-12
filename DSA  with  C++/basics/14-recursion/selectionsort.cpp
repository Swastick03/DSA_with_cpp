#include <iostream>

using namespace std;
void sort(int *arr, int n)
{

    if (n == 0 || n == 1)
        return;

    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[temp])
        {
            temp = i;
        }
    }
    swap(arr[0], arr[temp]);

    return sort(arr + 1, n - 1);
}
int main()

{

    int arr[6] = {8, 3, 9, 1, 2, 6};
    sort(arr, 6);
    cout << "Sorted in Selection Sort: " << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}