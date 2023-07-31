#include <iostream> 
using namespace std;
int fact(int a){
    int f=1;
    for (int i = 1; i <= a; i++)
    {
        f=f*i;
    }
    return f;
}
int nCr(int n, int r){
    int num= fact(n);
    int den= fact(r)* fact(n-r);
    return num/den;
}
int main() 

{ 
    int n,r;
    cout<< "Enter the value of n and r:" << endl;
    cin>> n>> r;
    int ans= nCr(n,r);
    cout<< "The nCr value is :" << ans << endl;

    
    return 0; 

}