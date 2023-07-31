#include <iostream> 
#include <math.h>
using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the binary code:" <<endl;
    cin>> n;
    int a;
    int i=0;
    int ans=0;
    while (n!=0)
    {
        a=n%10;
        n=n/10;
        if (a==1)
        {
         ans=ans+pow(2,i); 
        }
        i++;
         
    }
    cout<< "The decimal form is: "<< ans << endl;
    return 0; 

}