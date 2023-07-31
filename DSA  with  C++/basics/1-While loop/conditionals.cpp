#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the Value of n:";
    cin>> n;
    cout<< "The Value of n is:"<< n << endl;
    if (n>0)
    {
        cout<< "A is Positive";
    }
    else
    {
        if (n<0)
        {
            cout<< "A is negative";
        
        }
        else
        {
            cout<< "A is Zero";
        }
        
        
    
    }
    


    return 0; 
    
}