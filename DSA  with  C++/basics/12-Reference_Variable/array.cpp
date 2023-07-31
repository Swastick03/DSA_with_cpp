#include <iostream>

using namespace std;
int main()

{

    // dynamic allocation of array
    int n;
    cin >> n;

    // creating array
    int *arr = new int[n];

    // input nos
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // output
    cout << "Array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // releasing memeory

    delete[] arr;

    return 0;
}