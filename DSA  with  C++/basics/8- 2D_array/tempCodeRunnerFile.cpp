

//2nd approach
#include <iostream> 
using namespace std;
int largestRowSum(int arr[3][3], int row, int col){
    
    int maxi= INT_MIN;
    int rowindex= -1;
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
           sum+=arr[i][j];

        }
        if (sum> maxi)
        {
            maxi=sum;
            rowindex= i;
        }
        
        
    }
    return rowindex;
    


}
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
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            cout<< arr[i][j] << " ";
        }
       
        cout<< endl;

    }
    
    cout<< "The row for the largest sum :"<< largestRowSum(arr,3,3);
    
    
    return 0; 

}
