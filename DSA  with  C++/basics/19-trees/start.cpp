#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()

{
    // int arr[4] = {8, 4, 7, 2};

    // string ans = "";
    // for (int i = 0; i < 4; i++)
    // {
    //     if (arr[i] % 2 == 0)
    //     {
    //         ans += "Even";
    //     }
    //     else
    //     {
    //         ans += "Odd";
    //     }
    // }

    // cout << ans;

    // string a = "john";
    // string b = "gamdiu";
    // transform(a.begin(), a.end(), a.begin(), ::tolower);
    // transform(b.begin(), b.end(), b.begin(), ::toupper);
    // cout << a << " " << b;

    // string a = "101101110";
    // int count = 0;
    // string ans = "";
    // for (int i = 0; i < 9; i++)
    // {
    //     if (a[i] == '0')
    //     {
    //         ans += 'A' + count - 1;
    //         count = 0;
    //     }
    //     else
    //     {
    //         count++;
    //     }
    // }

    // cout << ans;   2 1 4 _ 3 1 20 _ @ # 459

    // string s = "1 2 3 . # 1 # 2 # 3";
    // string ans = "";
    // int n = s.length();

    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] > '0' && s[i] <= '9')
    //     {
    //         int a = s[i] - '0';
    //         if ((i + 1) < n && s[i + 1] != ' ')
    //         {
    //             a *= 10;
    //             a += (s[i + 1] - '0');
    //             i++;
    //         }

    //         char c = 'A' + a - 1;
    //         ans += c;
    //     }
    //     else if (s[i] == '_')
    //     {
    //         ans += ' ';
    //     }
    //     else if (s[i] == '#')
    //     {
    //         i += 2;
    //         while (i < n && s[i] != ' ')
    //         {
    //             ans += s[i];
    //             i++;
    //         }
    //     }
    //     else if (s[i] == ' ')
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         ans += s[i];
    //     }
    // }
    // cout << endl;
    // cout << ans;

    // int a = 34;
    // string res = "";

    // cout << a << endl;
    // while (a > 0)
    // {

    //     int s = a % 10;
    //     a = a / 10;
    //     s = s * s;
    //     res = to_string(s) + res;
    // }
    // cout << res;

    int a = 8;
    int sum = 0;
    while (a > 0)
    {
        int x = a % 2;
        a = a / 2;
        if (x == 0)
        {
            sum += 1;
        }
        else
        {
            sum += 2;
        }
    }
    if (sum % 2 == 0)
    {
        cout << "Not Magical" << endl;
    }
    else
    {

        cout << "Magical" << endl;
    }

    return 0;
}