#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout << "Enter  the value of n:"<< endl;
    cin>> n;
    int i=1;

    while (i<=n)
    {
        int j=n-i+1;
        int k=1;
        while (j)
        {
            cout<< k << " ";
            j--;
            k++;
        }
        int a=1;
        while (a<i)
        {
            cout<< "*"<< " ";
            a++;
        }
        int b=1;
        while (b<i)
        {
            cout<< "*"<< " ";
            b++;
        }
        int c=n-i+1;
        while (c>=1)
        {
            cout<< c<< " ";
            c--;
        }
        cout<< endl;
        i++;
        
    }
    
    return 0; 

}



//using for loop'
//Dabang Pattern reprint 
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