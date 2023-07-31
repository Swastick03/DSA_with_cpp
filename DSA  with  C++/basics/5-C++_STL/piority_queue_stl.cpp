#include <iostream>
#include <queue>

using namespace std;
int main()

{
    // default for Max Heap
    priority_queue<int> a;
    a.push(1);
    a.push(5);
    a.push(9);
    a.push(4);
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        cout << a.top() << endl;
        a.pop();
    }

    priority_queue<int, vector<int>, greater<int>> b;
    b.push(1);
    b.push(5);
    b.push(9);
    b.push(4);
    n = b.size();

    for (int i = 0; i < n; i++)
    {
        cout << b.top() << endl;
        b.pop();
    }

    return 0;
}