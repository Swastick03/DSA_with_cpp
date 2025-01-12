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

    // In Bubble sort j travels and we compare arr[j] and arr[j+1], and the smaller one is swap with bigger one

    int arr[6] = {64, 6, 11, 67, 9, 0};
    int size = 6;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        print(arr, size);
    }

    return 0;
}