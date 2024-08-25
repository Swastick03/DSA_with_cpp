#include <iostream>

using namespace std;
void printing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        // sum=sum+arr[i];
    }
    cout << endl;
}
int main()

{

    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[100];
    cout << "Enter the array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is: ";
    // int sum=0;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<< arr[i] <<" ";
    //     sum=sum+arr[i];
    // }

    int nonzero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[nonzero++]);
        }
        printing(arr, size);
    }

    // cout<< "\nThe sum of the array is: " << sum << endl;

    return 0;
}