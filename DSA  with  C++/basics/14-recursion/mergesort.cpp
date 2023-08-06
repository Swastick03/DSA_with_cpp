#include <iostream>

using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int f1[len1];
    int f2[len2];
    int index = s;
    for (int i = 0; i < len1; i++)
    {
        f1[i] = arr[index++];
    }
    index = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        f2[i] = arr[index++];
    }

    int i1 = 0;
    int i2 = 0;
    index = s;

    while (i1 < len1 && i2 < len2)
    {
        if (f1[i1] < f2[i2])
        {
            arr[index++] = f1[i1++];
        }
        else
        {
            arr[index++] = f2[i2++];
        }
    }

    while (i1 < len1)
    {
        arr[index++] = f1[i1++];
    }
    while (i2 < len2)
    {
        arr[index++] = f2[i2++];
    }
}
void mergesort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // for left part
    mergesort(arr, s, mid);

    // for right part
    mergesort(arr, mid + 1, e);

    merge(arr, s, e);
}
int main()

{

    int arr[13] = {3, 2, 65, 1, 6, 9, 45, 6, 223, 6, 86, 1, 0};
    mergesort(arr, 0, 13 - 1);

    cout << "Merge Sort: " << endl;
    for (int i = 0; i < 13; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}