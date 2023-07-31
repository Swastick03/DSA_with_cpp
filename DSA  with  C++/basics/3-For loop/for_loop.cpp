#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the value of n:" << endl;
    cin>> n;
    cout<< "Printing from 1 to n" << endl;
    // for (int i = 1; i <=n; i++)
    // {
    //     cout<< i<< endl;
    // }
    
    // It can be written as the follows
    int i=1;
    for(; ; )
    {
        if (i<=n)
        {
            cout<< i <<endl;
        }
        else{
            break;
        }
        i++;
    }
    return 0; 

}