#include <iostream> 

using namespace std;
int main() 

{ 

    int arr[3][3];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>> arr[i][j];
        }
        
    }

    //printing
     for (int i = 0; i < 3; i++)
    {
        //int sum=0;
        for (int j = 0; j < 3; j++)
        {
            cout<< arr[i][j] << " ";
            //sum=sum+arr[i][j];
        }
       // cout<<"\tSum="<< sum;
        cout<< endl;

    }
    cout<< endl;

                                            ////90 degree rotated
    //printing
     for (int i = 0; i < 3; i++)
    {
        //int sum=0;
        for (int j = 3-1; j >=0; j--)
        {
            cout<< arr[j][i] << " ";
            //sum=sum+arr[i][j];
        }
       // cout<<"\tSum="<< sum;
        cout<< endl;

    }
    
    return 0; 

}