#include <iostream>
#include <queue>

using namespace std;
int main()

{

    queue<string> q;
    q.push("hello");
    q.push("hi");
    q.push("how");

    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();
    cout << q.front() << endl;

    return 0;
}