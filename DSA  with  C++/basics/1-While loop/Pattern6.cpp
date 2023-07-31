//1st 
#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the value of n:" <<endl;
    cin>> n;
    int i=1;
    int let=65;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<(char) let << "  " ;
            j++;
        }
        let++;
        cout<<endl;
        i++;
    }
    
    return 0; 

}




//2nd code
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
        while (j<=n)
        {
            cout<< ch<< " ";
            j++;
            ch++;

        }
        cout<< endl;
        i++;
    }
    

    return 0; 

}







//3rd
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
        int j=1;
        char ch='A'+i+j-2;
        while (j<=n)
        {
            cout<< ch<< " ";
            j++;
            ch++;

        }
        cout<< endl;
        i++;
    }
    

    return 0; 

}
