#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "2 1 4 _ 3 1 20 _ @ # 459";
    string ans = "";
    int n = s.length(); // Length of the string

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            int a = s[i] - '0';
            if ((i + 1) < n && s[i + 1] != ' ' && s[i + 1] != '#' && s[i + 1] != '_')
            {
                a *= 10;
                a += (s[i + 1] - '0');
                i++;
            }
            char c = 'A' + a - 1; // Correcting base number to character conversion
            ans += c;
        }
        else if (s[i] == '_')
        {
            ans += ' ';
        }
        else if (s[i] == '#')
        {

            i += 2;
            while (i < s.length() && s[i] != ' ')
            {
                ans += s[i];
                i++;
            }
        }
        else if (s[i] == ' ')
        {
            continue; // Ignore spaces in the encoded string
        }
        else if (s[i] == '@' || s[i] == '.')
        {
            ans += s[i]; // Append @ or .
        }
    }

    // Check if the string is empty or "NULL"
    if (s.empty() || s == "NULL")
    {
        cout << "NULL" << endl;
    }
    else
    {
        cout << ans << endl; // Output the decoded message
    }

    return 0;
}
