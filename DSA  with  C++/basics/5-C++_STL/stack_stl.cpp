#include <iostream>
#include <stack>

using namespace std;
int main()

{
    stack<string> s;

    s.push("love");
    s.push("Babbar");
    s.push("Swastick");

    cout << s.top() << endl;

    s.pop();
    cout << s.top() << endl;

    cout << s.size() << endl;

    cout << s.empty() << endl;

    return 0;
}