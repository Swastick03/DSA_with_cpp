//Pattern 1



#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter n:"<< endl;
    cin>> n ;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<< "*" << " ";
            j+=1;
        }
        cout<< endl;
        i+=1;
    }
    
    return 0; 

}



//Pattern2

#include <iostream> 

using namespace std;
int main() 

{ 
    int n;
    cout<< "Enter n:" <<endl;
    cin>>n ;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<< i<< " ";
            j+=1;
        }
        cout<< endl;
        i+=1;
    }
    
    return 0; 

}




//Pattern3
#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter n:" << endl;
    cin>> n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        //int count=1;                                          //for 4 we take variable
                                                                // and print count with appending it with loop

        //int a=n;                    // for 3* we take a=n
        while (j<=n)
        {
            cout<< n-j+1<< " ";                  // and print a               
           // a-=1;                    // this also in 3*
            j+=1;

        }
        cout<< endl;
        i+=1;

    }
    
    return 0; 

}