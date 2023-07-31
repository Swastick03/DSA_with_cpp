#include <iostream>

using namespace std;
bool binary(int *arr, int s, int end, int target)
{
    if (s > end)
        return false;
    int mid = (s + end) / 2;
    if (arr[mid] == target)
    {
        return true;
    }
    if (arr[mid] < target)
    {
        return binary(arr, mid + 1, end, target);
    }
    return binary(arr, s, mid - 1, target);
}
int main()

{

    int arr[7] = {2, 5, 7, 8, 12, 34, 43};
    int end = 7 - 1;
    int target = 41;

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