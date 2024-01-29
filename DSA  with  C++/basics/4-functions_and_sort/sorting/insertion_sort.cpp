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
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--) //{64, 6, 11, 67, 9, 0}
        {
            // print(arr, size);    ,6(j),5(i),3,2,1
            // cout << "->"             j--   --j
            //      << "i: " << arr[i] << "   j: " << arr[j] << endl;
            if (temp < arr[j]) //{0,6,9,11,64 , 67}
                               // temp = 0
                               //
            {
                arr[j + 1] = arr[j]; //{0, 64, 9, 11, 11, 67}
                // arr[j] = temp;
            }
            else
            {
                arr[j + 1] = temp;
                break;
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