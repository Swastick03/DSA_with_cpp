#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &arr, int x)
{

    if (x == 0)
        return 0;
    if (x < 0)
        return INT16_MAX;

    int mini = INT16_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, x - arr[i]);
        if (ans != INT16_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    return mini;
}

int solvemem(vector<int> &arr, int x, vector<int> &dp)
{

    if (x == 0)
        return 0;
    if (x < 0)
        return INT16_MAX;
    if (dp[x] != -1)
    {
        return dp[x];
    }
    int mini = INT16_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solvemem(arr, x - arr[i], dp);
        if (ans != INT16_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    dp[x] = mini;
    return mini;
}

int solvetab(vector<int> &arr, int x)
{

    vector<int> dp(x + 1, INT16_MAX);
    dp[0] = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i - arr[j] >= 0 && dp[i - arr[j]] != INT16_MAX)
            {
                dp[i] = min(dp[i], 1 + dp[i - arr[j]]);
            }
        }
    }
    if (dp[x] == INT16_MAX)
        return -1;

    return dp[x];
}
int main()

{

    int n = 3;
    vector<int> arr(n);
    arr = {1, 2, 3};

    int x = 7;

    // int ans = solve(arr, x);

    // vector<int> dp(x + 1, -1);
    // int ans = solvemem(arr, x, dp);

    int ans = solvetab(arr, x);

    cout << ans;
    return 0;
}