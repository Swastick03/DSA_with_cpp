// #include <iostream> 

// using namespace std;
// int main() 

// { 

//     int n;
//     cout<< "Enter n:" <<endl;
//     cin>> n;
//     int i=1;
//     while (i<=n)
//     {
//         cout<< i << endl;
//         i=i+1;
//     }
    
//     return 0; 

// }




//Sum of n number
// #include <iostream> 

// using namespace std;
// int main() 

// { 

//     int n;
//     cout<< "Enter the Value of n:" <<endl;
//     cin>> n;
//     int sum=0;
//     int i=1;
//     while (i<=n)
//     {
//         sum+=i;
//         i+=1;
//     }
//     cout<< "The Sum of all n elements are:" <<  sum <<endl;
//     return 0; 

// }




//Prime No

#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter the number:" <<endl;
    cin>> n; 
    int i=2;
    while (i<n)
    {
        if (n%i==0)
        {
            cout<< n << " is not a prime number" << endl;
            break;

        }
        else
        {
            cout<< n << "is a prime number" << endl;
            break;
        }
        i+=1;
    }
    
    return 0; 

}