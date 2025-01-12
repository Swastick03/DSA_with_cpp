#include <iostream>

using namespace std;
void print(int arr[], int size)
{
    cout << "The Array is: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
int main()

{
    // In selection Sort the i will hold a position and the j will move from (i+1 to  last) and find for the minimum no
    // in the array from (i+1   to  last ) , if finds it will swap place and move on.

    int arr[6] = {64, 6, 11, 67, 9, 0};
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        int temp = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[temp])
            {
                temp = j;
            }
        }
        swap(arr[i], arr[temp]);
        print(arr, size);
    }

    return 0;
}