#include <iostream>

using namespace std;
int power(int num, int pow)
{
    if (pow == 0)
        return 1;
    if (pow == 1)
        return num;
    if (pow % 2 == 0)
    {
        return power(num, pow / 2) * power(num, pow / 2);
    }
    pow--;
    return num * power(num, pow / 2) * power(num, pow / 2);
}
int main()

{

    int num;
    cout << "Enter number: " << endl;
    cin >> num;
    int pow;
    cout << "Enter power: " << endl;
    cin >> pow;

    cout << "Answer is: " << power(num, pow) << endl;
    return 0;
}