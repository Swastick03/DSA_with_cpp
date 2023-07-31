#include <iostream> 

using namespace std;
int main() 

{ 

    int arr[]={1,2,3,2,1,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = i; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count=count+1;
            }
            
        }
        cout<< "The no of Occurance of "<< arr[i] << " is" << count<< endl;
    }
    

    return 0; 

}