//Question --- Find the difference between the product and sum of all digits of a number
#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter n:" << endl;
    cin>> n;
    int sum=0;
    int pro=1;
    int a,b,c;
    while (n!=0)
    {
        a=n%10;
        sum+=a;
        pro*=a;
        n=n/10;
        b=sum;
        c=pro;
    }
    a=c-b;
    cout<< "The Required output is:" << endl;
    cout<< a;
    return 0; 

}


//Question---  Find Comliment of a number
#include <iostream> 
#include <math.h>
using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the number:" << endl;
    cin>> n;
    int m=n;
    int mask=0;
    while (m!=0)
    {
        m=m>>1;
        (mask<< 1) |1;

    }
    
    int ans= (~n) & mask;
    cout<< ans << endl;

    return 0; 

}