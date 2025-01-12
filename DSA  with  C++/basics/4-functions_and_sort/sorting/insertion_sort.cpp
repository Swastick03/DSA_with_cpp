#include <iostream>

using namespace std;
void print(int arr[], int s)
{
    cout << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
void sort(int arr[], int size)
{
    for (int i = i; i < size; i++)
    {
        int temp = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    print(arr, size);
}
int main()

{

    int arr[6] = {0, 64, 6, 11, 67, 9};
    int size = 6;
    sort(arr, 6);
}