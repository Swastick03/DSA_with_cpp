#include <iostream>
#include <vector>
using namespace std;

void printing(vector<vector<int>> dp)
{
    cout << endl;
    cout << "Printing the dp:" << endl;

    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; i < dp[i].size(); j++)
        {
            cout << dp[i][j] << "  ";
        }
        cout << endl;
    }
}

int helper(string &text1, string &text2, int i, int j, vector<vector<int>> &dp)
{
    if (i == text1.length())
        return 0; // base case 1...
    if (j == text2.length())
        return 0; // base case 2...
    if (dp[i][j] != -1)
        return dp[i][j]; // Memoization...
    int ans = 0;
    // printing(dp);
    if (text1[i] == text2[j])
    {

        ans = 1 + helper(text1, text2, i + 1, j + 1, dp); // Recursive call 1...
    }

    else
        ans = max(helper(text1, text2, i + 1, j, dp), helper(text1, text2, i, j + 1, dp)); // R.R.
    return dp[i][j] = ans;
}

int main()

{

    string text1 = "adcbc";
    string text2 = "dcadb";
    vector<vector<int>> dp(text1.length(), vector<int>(text2.length(), -1)); // dp Array...
    int g = helper(text1, text2, 0, 0, dp);
    cout << g;
    return 0;
}