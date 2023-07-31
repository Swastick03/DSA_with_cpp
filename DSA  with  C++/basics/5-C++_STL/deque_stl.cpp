#include <iostream>
#include <deque>

using namespace std;
int main()

{

    deque<int> d;
    cout << d.empty() << endl; // return whether the deque is empty or not

    d.push_back(1); // enter element from back
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << ",";
    }
    cout << endl;

    d.push_back(2);
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << ",";
    }
    cout << endl;

    d.push_front(3); // enter element from front
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << ",";
    }
    cout << endl;

    cout << d.empty() << endl;

    d.pop_back();  // remove from back
    d.pop_front(); // remove from front

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << ",";
    }
    cout << endl;

    cout << d.at(0) << endl; // return element at index 0

    d.push_back(8);
    d.push_back(7);
    d.push_back(4);

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << ",";
    }
    cout << endl;

    d.erase(d.begin(), d.begin() + 2); // delete element from 1st to 1st+2 elements

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << ",";
    }
    cout << endl;

    return 0;
}