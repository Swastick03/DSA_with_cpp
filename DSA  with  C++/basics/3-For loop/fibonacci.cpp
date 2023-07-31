#include <iostream> 

using namespace std;
int main() 

{ 

    int a=0;
    int b=1;
    int n;
    cout<< "Enter the value of n: "<< endl;
    cin>> n;
    if (n==1)
    {
        cout<< "The fibonacci series is : "<< endl;
        cout<< a<< endl;

    }
    else if (n==2)
    {
        cout<< "The fibonacci series is :" << endl;
        cout<< a <<endl;
        cout<< b <<endl;

    }

    else
    {
        cout<< "The fibonacci series is: " << endl;
        cout<< a<< endl;
        cout<< b<< endl;
        for (int i = 0; i < n-2; i++)
        {
        int sum=a+b;
        cout<< sum << endl;
        a=b;
        b=sum;
        }
        

    }
    
    
    
    return 0; 

}