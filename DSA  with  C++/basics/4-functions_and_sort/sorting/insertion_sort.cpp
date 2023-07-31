#include <iostream>

using namespace std;
int main()

{

    int arr[6] = {64, 6, 11, 67, 9, 0};
    int size = 6;
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];

        for (int j = i - 1; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The Array is: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}