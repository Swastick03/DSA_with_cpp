#include <iostream> 

using namespace std;
int main() 

{ 

    int i,n;
    for ( i = 1; i < =10 ; i++)
    {
        if (i>= 5)
        {
            n = fork();
            cout<<"\n ID= "<<getpid( );
        }
        else{
            exit(0);
        }
        
    }
    
    return 0; 

}