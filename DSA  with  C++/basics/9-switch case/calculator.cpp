#include <iostream> 

using namespace std;
int main() 

{ 

    int a,b;
    cout<< "Enter the value of a:" << endl;
    cin>> a;
    cout<< "Enter the value of b: " << endl;
    cin>> b;
    cout<< "----------------X--------------X-----------------"<< endl;
    cout<< "1. Addition" <<endl;
    cout<< "2. Subtraction" <<endl;
    cout<< "3. Multiplication" <<endl;
    cout<< "4. Division" <<endl;
    int c;
    cout<< "Enter your choice" << endl;
    cin>> c;
    switch (c)
    {
    case 1:
        cout<< "Answer is :" << a+b <<endl;
        break;
    case 2:
        cout<< "Answer is :" << a-b << endl;
        break;
    case 3:
        cout<< "Answer is :" << a*b << endl;
        break;
    case 4:
        cout<< "Answer is :" << a/b << endl;
        break;
    
    default:
        cout<< "You entered a wrong input!!" << endl;

        break;
    }
    cout<< endl;
    cout<< "--------------------------------------------------------"<< endl;
    main();
    return 0; 
    
}