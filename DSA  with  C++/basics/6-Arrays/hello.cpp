#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

// find the maximum , if arr is empty return -1;

// int maximum(int arr[], int size)
// {
//     if (size == 0)
//     {
//         return -1;
//     }

//     int maxi = INT_MAX;

//     for (int i = 0; i < size; i++)
//     {
//         maxi = min(maxi, arr[i]);
//     }
//     return maxi;
// }

int main()

{
    // int size;
    // cin >> size;
    // int arr[size];

    // int arr[8] = {1, 2, 3, 4, 5, 6, 6, 7};

    // cout << maximum(arr, 8);

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];

    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " , ";
    // }

    // int a = 8, b = 5;
    // // cout << sqrt(a);
    // cout << floor(sqrt(a));

    int arr1[5] = {8, 2, 4, 5, 1};
    int arr2[5] = {24, 67, 78, 43, 65};

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] == 2)
        {
            sum = sum + arr2[i];
        }
        if (arr1[i] == 5)
        {
            sum = sum + arr2[i];
        }
    }

    cout << sum;

    return 0;
}