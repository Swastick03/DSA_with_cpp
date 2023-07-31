#include <iostream>

using namespace std;
bool linear(int *arr, int size, int no)
{

    if (size == 0)
        return false;
    if (arr[0] == no)
        return true;

    return linear(arr + 1, size - 1, no);
}
int main()

{

    int arr[7] = {2, 65, 74, 32, 54, 76, 9};
    if (linear(arr, 7, 5))
    {
        cout << " Found it " << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}