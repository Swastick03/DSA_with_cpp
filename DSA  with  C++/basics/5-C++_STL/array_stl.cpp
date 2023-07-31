#include <iostream>
#include <array>

using namespace std;
int main()

{

    array<int, 4> a = {12, 5, 9, 78};
    cout << a.size() << endl;  // return size
    cout << a.at(2) << endl;   // return element at 2nd Index
    cout << a.empty() << endl; // return if the array is empty or not   0-false   1-true
    cout << a.front() << endl; // return the first element
    cout << a.back() << endl;  // return the last element

    return 0;
}