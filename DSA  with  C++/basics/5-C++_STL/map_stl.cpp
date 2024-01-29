#include <iostream>
#include <map>

using namespace std;
int main()

{

    map<int, string> m;
    m[1] = "hello";
    m[8] = "hi";
    m[5] = "everyone";

    m.insert({2, "suiiii"});

    for (auto i : m)
    {
        cout << i.first << "  " << i.second << endl;
    }

    cout << m.count(8); // 1 - if present      0- if absent

    // m.erase(5);
    // for (auto i : m)
    // {
    //     cout << i.first << "  " << i.second << endl;
    // }

    return 0;
}