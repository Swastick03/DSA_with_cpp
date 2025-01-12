#include <iostream>

using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
            count++;
    }

    swap(arr[s], arr[s + count]);

    int i = s, j = e;
    int p = s + count;

    while (i < p && j > p)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < p && j > p)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return p;
}
int partitionn(int arr[], int s, int e)
{
    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivot_index = s + count;
    swap(arr[s], arr[pivot_index]);

    int i = s, j = e;
    while (i < pivot_index && j > pivot_index)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivot_index && j > pivot_index)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivot_index;
}
void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);

    // left side
    quicksort(arr, s, p - 1);

    // right side
    quicksort(arr, p + 1, e);
}
int main()

{

    int arr[6] = {3, 5, 8, 4, 2, 1};
    quicksort(arr, 0, 6 - 1);
    cout << "After Sorting: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}