#include <iostream>
#include <vector>

using namespace std;
int main()

{

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> b;

    for (int col = 0; col < 3; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < 3; row++)
            {
                b.push_back(a[row][col]);
            }
        }
        else
        {
            for (int row = 3 - 1; row >= 0; row--)
            {
                b.push_back(a[row][col]);
            }
        }
    }

    cout << "The array is:" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}