#include <iostream>

using namespace std;
class Student
{
private:
    int age = 90;
    string name;

public:
    int getage()
    {
        return this->age;
    }
};
int main()

{

    Student s1;
    cout << s1.getage() << endl;
    return 0;
}