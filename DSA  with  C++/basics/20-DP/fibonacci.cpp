#include <iostream>
#include <vector>
using namespace std;

int solve(int n)
{ // recursion
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return solve(n - 1) + solve(n - 2);
}

int solve1(int n, vector<int> &dp) // top-down approach (Memorization)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = solve1(n - 1, dp) + solve1(n - 2, dp);
    return dp[n];
}

int solve2(int n) // bottom-up approach (Tabulation)
{
    vector<int> dp(n + 1);

    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int solve3(int n) // space optimazation approach
{
    int pre1 = 0;
    int pre2 = 1;
    for (int i = 2; i <= n; i++)
    {
        int curr = pre1 + pre2;
        pre1 = pre2;
        pre2 = curr;
    }
    return pre2;
}

int main()
{

    int n;
    cin >> n;

    // int ans = solve(n);   //recursion

    // vector<int> dp(n + 1, -1);
    // int ans1 = solve1(n, dp);       //top-down approach (Memorization)

    // int ans2 = solve2(n);               //bottom-up approach (Tabulation)

    int ans3 = solve3(n); // space optimazation approach

    cout << ans3;
    return 0;
}