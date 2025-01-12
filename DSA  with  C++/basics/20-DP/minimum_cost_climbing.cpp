#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &cost, int n)
{ // recursion
    if (n == 0)
        return cost[0];
    if (n == 1)
        return cost[1];
    int ans = cost[n] + min(solve(cost, n - 1), solve(cost, n - 2));
    return ans;
}

int solve1(vector<int> &cost, int n, vector<int> &dp) // top-down approach (Memorization)
{
    if (n == 0)
        return cost[0];
    if (n == 1)
        return cost[1];
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = cost[n] + min(solve1(cost, n - 1, dp), solve1(cost, n - 2, dp));
    return dp[n];
}

int solve2(vector<int> &cost, int n) // bottom-up approach (Tabulation)
{
    vector<int> dp(n + 1);

    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2; i <= n; i++)
    {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }
    return min(dp[n - 1], dp[n - 2]);
}

int solve3(vector<int> &cost, int n) // space optimazation approach
{
    int pre1 = cost[0];
    int pre2 = cost[1];
    for (int i = 2; i < n; i++)
    {
        int curr = cost[i] + min(pre1, pre2);
        pre1 = pre2;
        pre2 = curr;
    }
    return min(pre1, pre2);
}

int main()
{

    int n = 10;

    vector<int> cost(n);
    cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};

    // for (int i = 0; i < n; i++)
    // {
    //     cout << cost[i] << " , ";
    // }

    // int ans = min(solve(cost, n - 1), solve(cost, n - 2)); // recursion

    // vector<int> dp(n + 1, -1);
    // int ans1 = min(solve1(cost, n - 1, dp), solve1(cost, n - 2, dp)); // top-down approach (Memorization)

    // int ans2 = solve2(cost, n); // bottom-up approach (Tabulation)

    int ans3 = solve3(cost, n); // space optimazation approach

    cout << ans3;

    return 0;
}