#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter n:" <<endl;
    cin>> n;
    int i=1;
    while (i<=n)
    {
        int j=0;
        while (j<i)
        {
            cout<< i-j<<" ";
            j+=1;
        }
        cout<< endl;
        i+=1;
    }
    
    return 0; 

}