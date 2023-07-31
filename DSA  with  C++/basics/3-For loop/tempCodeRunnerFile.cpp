
//
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
        mask=(mask<< 1) |1;

    }
    
    int ans= (~n) & mask;
    cout<< ans << endl;

    return 0; 

}
