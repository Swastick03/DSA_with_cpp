#include <iostream>

using namespace std;
void reverse(string &a, int i, int j)
{
    if (i > j)
        return;
    swap(a[i], a[j]);
    return reverse(a, i + 1, j - 1);
}
int main()

{

    string a = "madams";
    string b = a;
    int i = a.length();
    reverse(a, 0, i - 1);
    if (b == a)
    {
        cout << "Pallindrom string!!!!" << endl;
    }
    else
    {
        cout << "Not Pallindrom!!!" << endl;
    }

    return 0;
}