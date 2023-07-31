#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()

{
    // using it we can do binary serach , for which we have to keep the items in sorted order
    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(13);

    cout << binary_search(v.begin(), v.end(), 5) << endl;
    cout << lower_bound(v.begin(), v.end(), 13) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 13) - v.begin() << endl;

    int a = 5;
    int b = 6;
    cout << "Max--" << max(a, b) << endl;   // print max value
    cout << "Min ---" << min(a, b) << endl; // print min value
    swap(a, b);
    cout << "A--" << a << "    "
         << "B---" << b << endl;

    string s = "abcde";
    reverse(s.begin(), s.end());
    cout << "String--- " << s << endl;

    rotate(v.begin(), v.begin() + 2, v.end());
    for (int i : v)
    {
        cout << i << ",";
    }
    cout << endl;

    sort(v.begin(), v.end()); // it work on the basis of Intro Sort(Quick sort, Heap sort, Insertion sort)
    for (int i : v)
    {
        cout << i << ",";
    }
    cout << endl;

    return 0;
}