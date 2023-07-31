//1
#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the number n:"<< endl;
    cin>> n;
    int i=1;
    while (i<=n)
    {
        // space print 
        int space=n-i;
        while (space)
        {
            cout<< " " << " ";
            space=space-1;

        }
        
        //star print
        int st=1;
        while(st<=i)
        { 
            cout<< "*"<< " ";
            st++;
        }
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
    cout<< "Enter the value of n"<< endl;
    cin>> n;
    int i=1;
    while (i<=n)
    {
        int st=n-i+1;
        while (st)
        {
            cout<<"*" <<" ";
            st--;

        }
        cout<< endl;
        i++;
        
    }
    
    return 0; 

}



//3
#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the number n:"<< endl;
    cin>> n;
    int i=1;
    while (i<=n)
    {
        // space print 
        int space=0;
        while (space<i)
        {
            cout<< " " << " ";
            space++;

        }
        
        //star print
        int st=n-i+1;
        while(st)
        { 
            cout<< "*"<< " ";
            st--;
        }
        cout<< endl;
        i++;

    }
    
    return 0; 

}