// link==   https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=1

#include <iostream>

using namespace std;
bool ispossible(int *arr, int mid, int n, int m)
{
    int pagecount = 0;
    int studentcount = 1;
    for (int i = 1; i < n; i++)
    {
        if (pagecount + arr[i] <= mid)
        {
            pagecount += arr[i];
        }
        else
        {
            studentcount++;
            if (arr[i] > mid || studentcount > m)
            {
                return false;
            }
            pagecount = arr[i];
        }
    }
    return true;
}
int bookallocate(int *arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s = 0;
    int e = sum;
    int ans;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (ispossible(arr, mid, n, m))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()

{

    int arr[4] = {10, 20, 30, 40};
    int n = 4;
    int m = 2;
    cout << "Min is: " << bookallocate(arr, n, m);
    return 0;
}
