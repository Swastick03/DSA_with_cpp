#include <iostream>

using namespace std;
void sort(int arr[], int n)
{
    if (n == 0 || n == 1)
        return;

    sort(arr, n - 1);
    int temp = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > temp)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;
}
int main()

{

    int arr[6] = {2, 9, 1, 6, 3, 0};
    sort(arr, 6);
    cout << "After Insertion sort: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}