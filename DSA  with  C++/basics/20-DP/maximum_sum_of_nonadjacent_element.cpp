#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> &num, int i, int n)
{
    if (i >= n)
        return 0;
    if (i == n - 1)
        return num[i];

    int inc = solve(num, i + 2, n) + num[i];
    int exc = solve(num, i + 1, n) + 0;

    return max(inc, exc);
    // if (n < 0)
    //     return 0;
    // if (n == 0)
    //     return num[n];

    // int inc = solve(num, n - 2) + num[n];
    // int exc = solve(num, n - 1) + 0;

    // return max(inc, exc);
}
int solveMem(vector<int> &num, int n, vector<int> &dp)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return num[0];

    if (dp[n] != -1)
        return dp[n];

    int inc = solveMem(num, n - 2, dp) + num[n];
    int exc = solveMem(num, n - 1, dp) + 0;

    dp[n] = max(inc, exc);
    return dp[n];
}

int solveTab(vector<int> &num, int n)
{
    vector<int> dp(n, 0);

    dp[0] = num[0];
    int in = 0, ex = 0;

    for (int i = 1; i < n; i++)
    {
        if (i >= 2)
        {
            in = dp[i - 2] + num[i];
        }

        ex = dp[i - 1] + 0;
        dp[i] = max(in, ex);
    }
    return dp[n - 1];
}

int solvesp(vector<int> &num, int n)
{
    int a = 0;
    int b = num[0];

    int c;

    int in = 0;
    int ex = 0;

    for (int i = 1; i < n; i++)
    {
        in = a + num[i];

        ex = b + 0;
        c = max(in, ex);
        a = b;
        b = c;
    }

    return c;
}

int main()

{

    int n = 5;

    vector<int> num(n);
    num = {9, 9, 8, 2, 3}; // 20

    // int ans = solve(num, 0, n);          //recursion

    // vector<int> dp(n + 1, -1);
    // int ans = solveMem(num, n, dp); // memorization

    // int ans = solveTab(num, n);     //tabulation

    int ans = solvesp(num, n); // space optimisation

    cout << ans;
    return 0;
}