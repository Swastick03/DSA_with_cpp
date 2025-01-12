#include <iostream>

using namespace std;
bool binary(int *arr, int s, int e, int target)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return true;
    }
    else if (arr[mid] > target)
    {
        return binary(arr, s, mid - 1, target);
    }
    else
    {
        return binary(arr, mid + 1, e, target);
    }
}
int main()

{

    int arr[7] = {2, 5, 7, 8, 12, 34, 43};
    int end = 7 - 1;
    int target = 34;

    if (binary(arr, 0, end, target))
    {
        cout << "Found it !!";
    }
    else
    {
        cout << " Not Found !!!";
    }

    return 0;
}