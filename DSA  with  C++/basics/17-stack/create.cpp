#include <iostream>
#include <stack>

using namespace std;
int main()

{

    stack<int> a;
    a.push(2);
    a.push(3);
    a.push(4);

    a.pop();

    cout << "At top element: " << a.top() << endl;
    if (a.empty())
    {
        cout << "The stack is empty!" << endl;
    }
    else
        cout << "The stack is not empty!" << endl;

    return 0;
}