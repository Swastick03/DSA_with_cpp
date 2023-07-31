#include <iostream> 

using namespace std;
int main() 

{ 
    int n;
    cout<< "Enter the value of n: "<< endl;
    cin>> n;
    int a=n;
    for (int i = 1; i <=n; i++)
    {
       for (int j = 1; j <=a; j++)
       {
        cout<< j<< " ";
       }
       for (int k = 1; k <= i-1; k++)
        {
            cout<<"*"<< " ";
        }
       for (int l = 1; l <= i-1; l++)
        {
            cout<<"*"<< " ";
        }
        for (int m = a; m>=1; m--)
       {
        cout<< m<< " ";
       }
       a--;
       cout<<endl;
       
    }
    
    
    
    return 0; 

}