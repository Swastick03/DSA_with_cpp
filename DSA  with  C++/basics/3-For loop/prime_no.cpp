#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the value of n:" << endl;
    cin>> n;
    bool prime=1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime=0;
            break;
            
        }
        
        
    }
        if (prime==0)
        {
            cout<< "The number is not prime!" << endl;

        }
        else
        {
            cout<< "The number is prime!" << endl;
        }
    

    return 0; 

}