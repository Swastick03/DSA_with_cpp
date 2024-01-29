#include <iostream>
#include <queue>

using namespace std;
int main()

{

    queue<int> q;
    q.push(45);

    q.push(4);
    cout << q.front() << endl;
    q.push(5);

    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << "Size of queue: " << q.size() << endl;
    return 0;
}