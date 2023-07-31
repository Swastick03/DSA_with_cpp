#include <iostream> 

using namespace std;
int main() 

{ 

    char ch;
    int a;
    cout<< "Enter the Character:" << endl;
    cin >> ch;
    a= (int) ch;
    if (a>=65 and a<=90)
    {
        cout<< "This is Upper case alphabet" << endl;
    }
    else if (a>=97 and a<=122)
    {
        cout<< "This is Lower case alphabet" << endl;
    }
    else if (a>=48 and a<=57)
    {
        cout<< "This is a Numeric" <<endl;
    }
    
    return 0; 

}