#include <iostream>

using namespace std;
void reverse(string &a, int i, int j)
{
    cout << "--->" << a << endl;
    if (i > j)
        return;
    swap(a[i], a[j]);
    return reverse(a, i + 1, j - 1);
}
int main()

{

    string a = "abcdef";
    int i = a.length();
    reverse(a, 0, i - 1);
    cout << a;

    return 0;
}