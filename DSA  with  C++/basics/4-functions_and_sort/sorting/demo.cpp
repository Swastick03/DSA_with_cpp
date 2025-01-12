#include <iostream>

using namespace std;
int main()

{

    int arr[7] = {3, 7, 2, 0, 8, 45, 23};

    for (int i = 0; i < 7; i++)
    {
        int temp = i;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[j] < arr[temp])
            {
                temp = j;
            }
        }
        swap(arr[i], arr[temp]);
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " , ";
    }

    return 0;
}