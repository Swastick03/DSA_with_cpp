#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()

{
    int n = 5;
    vector<int> num(n);
    num = {1, 2, 3, 4, 5};
    int k = 2; // for left rotate
    k = n - k; // for right rotate
    // for(int i = 0;i<n;i++){

    // }

    reverse(num.begin(), num.begin() + k);
    reverse(num.begin() + k, num.end());
    reverse(num.begin(), num.end());
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " , ";
    }
    return 0;
}