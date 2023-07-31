#include <iostream> 

using namespace std;

bool eve(int a)
{
   
    if (a%2==0)
    {
        return 1;
    }
    return 0;

}
int main() 

{ 

    int num;
    int c;
    cout<< "Enter the value:" <<endl;
    cin>> num;
    if (eve(num))
    {
        cout<< "The number is an even number.";
    }
    else{
        cout<< "The number is an odd number.";
    }


    return 0; 

}