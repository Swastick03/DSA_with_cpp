#include <iostream>

using namespace std;
int main()

{

    int arr[7] = {12, 13, 14, 15, 16, 17, 18};
    int n = 7;
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[(i + 3) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
    cout << "Following sorted" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " , ";
    }

    return 0;
}