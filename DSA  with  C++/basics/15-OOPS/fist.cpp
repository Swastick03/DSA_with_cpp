#include <iostream>

using namespace std;
class Hero
{
    int health = 5;
    char ch;
    string s;
    double sp;
};
int main()

{

    Hero h1;
    cout << "size: " << sizeof(h1) << endl;
    return 0;
}