#include <iostream>
#include <vector>

using namespace std;
int main()

{

    vector<int> v;
    v.push_back(1);               // enter element inside vector from back
    cout << v.size() << endl;     // return size
    cout << v.capacity() << endl; // return caapacity of the vector
    v.push_back(2);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(3);
    cout << v.size() << endl; // this is used to visualise how capacity doubles itself
    cout << v.capacity() << endl;
    v.push_back(4);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }
    cout << endl;

    cout << v.at(2) << endl;   // return element at index(2)
    cout << v.front() << endl; // return the front element
    cout << v.back() << endl;  // return the back element

    v.pop_back(); // delete last element
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }
    cout << endl;

    v.clear(); // delete all the elements
    cout << "The size is: " << v.size() << endl;

    vector<int> a(5, 1); // insitialize a vector of size 5 and all elemets will be 1.
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << ",";
    }
    cout << endl;

    vector<int> last(a); // copy "a" vector to last
    for (int i = 0; i < last.size(); i++)
    {
        cout << last[i] << ",";
    }
    cout << endl;
    return 0;
}