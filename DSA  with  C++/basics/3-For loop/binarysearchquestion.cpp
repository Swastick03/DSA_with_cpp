#include <iostream>

using namespace std;
int rotate_sorted(int *arr, int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] >= arr[s])
        {
            if (arr[s] <= target && target <= arr[mid])
            {
                e = mid;
            }
            else
            {
                s = mid + 1;
            }
        }
        else if (arr[mid] <= arr[e])
        {
            if (arr[mid] <= target && target <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int peak_index(int *arr, int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            e = mid;
        }
    }
    return s;
}
int pivot(int *arr, int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else if (arr[mid] < arr[size - 1])
        {
            e = mid;
        }
    }
    return s;
}
int main()

{

    int arr[6] = {5, 6, 9, 1, 2, 4};
    cout << "Peak element: " << arr[peak_index(arr, 6)] << endl;
    cout << "Pivot element: " << arr[pivot(arr, 6)] << endl;
    cout << "Element in index: " << rotate_sorted(arr, 6, 5) << endl;

    return 0;
}