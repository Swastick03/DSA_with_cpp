#include <iostream>

using namespace std;
int main()

{

    int row, col;
    row = 3;
    int size[] = {1, 3, 4};

    // creating
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[size[i]];
    }

    // input

    cout << "Input: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output

    cout << "Output: " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // releasing
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}