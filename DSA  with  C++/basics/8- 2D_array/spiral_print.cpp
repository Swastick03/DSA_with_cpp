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

    int start_col = 0;
    int end_col = 2;
    int start_row = 0;
    int end_row = 2;
    int total = 3 * 3;
    int count = 0;

    vector<int> b;
    while (count < total)
    {
        for (start_col; start_col <= end_col; start_col++)
        {
            b.push_back(a[start_row][start_col]);
            count++;
        }
        start_row++;
        for (start_row; start_row <= end_row; start_row++)
        {
            b.push_back(a[start_row][end_col]);
            count++;
        }
        end_col--;
        for (end_col; end_col >= start_col; end_col--)
        {
            b.push_back(a[end_row][end_col]);
            count++;
        }
        end_row--;
        for (end_row; end_row >= start_row; end_row--)
        {
            b.push_back(a[end_row][start_col]);
            count++;
        }
        start_col++;
    }

    cout << "The Array is:" << endl;

    for (int i = 0; i < 9; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}