#include <iostream>
#include <set>

using namespace std;
int main()

{
    // set return only unique item and in order
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(9);
    s.insert(9);
    s.insert(9);
    s.insert(0);
    s.insert(2);

    for (int i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    s.erase(s.begin());
    for (int i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << s.count(5) << endl; // return whether the element (5) is present in it or not  ( 1-true   0-false)

    return 0;
}