#include <iostream>

using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1;    no change

    // *p2 = *p2 + 1;   change in only p1

    // **p2 = **p2 + 1;    change in i
}
int main()

{

    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;

    cout << i << endl;
    cout << p1 << endl;
    cout << p2 << endl;
    update(p2);
    cout << i << endl;
    cout << p1 << endl;
    cout << p2 << endl;

    return 0;
}