//1st
#include <iostream> 

using namespace std;
int main() 

{ 
    int n;
    cout<< "Enter the value of n:" <<endl;
    cin>> n;
    int i=1;
    char ch='A';
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<< ch<< " ";
            j++;

        }
        ch++;
        cout<< endl;
        i++;
    }
    
    return 0; 

}



//2
#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the value of n:" <<endl;
    cin>> n;
    int i=1;
    while (i<=n)
    {
        char ch='A'+i-1;
        int j=1;
        while (j<=i)
        {
            cout<< ch <<" ";
            ch++;
            j++;
        }
        i++;
        cout<< endl;
    }
    
    return 0; 

}




//3
#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the value of n:" <<endl;
    cin>> n;
    int i=1;
    while (i<=n)
    {
        char ch='A'+n-i;
        int j=1;
        while (j<=i)
        {
            cout<< ch <<" ";
            ch++;
            j++;
        }
        i++;
        cout<< endl;
    }
    
    return 0; 

}
