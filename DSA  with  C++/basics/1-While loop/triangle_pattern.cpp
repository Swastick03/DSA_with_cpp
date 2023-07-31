// //1
// #include <iostream> 

// using namespace std;
// int main() 

// { 

//     int n;
//     cout<< "Enter n:" << endl;
//     cin>> n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<< "* ";
//             j+=1;
//         }
//         cout <<endl;
//         i+=1;
//     }
    
//     return 0; 

// }



//2
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
        int j=0;
        while (j<i)
        {
            cout<< i+j<< " ";
            j+=1;
        }
        cout <<endl;
        i+=1;
    }
    
    return 0; 

}




/// other way
#include <iostream> 

using namespace std;
int main() 

{ 

    int n;
    cout<< "Enter n:" << endl;
    cin>> n;
    int i=1;
    int count =1;
    while (i<=n)
    {
        int j=0;
        while (j<i)
        {
            cout<< count<< " ";
            j+=1;
            count++;
        }
        cout <<endl;
        count=count-i+1;
        i+=1;
        
    }
    
    return 0; 

}