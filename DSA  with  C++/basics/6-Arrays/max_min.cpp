#include <iostream> 

using namespace std;
int printarr(int arr[100], int size)
{
    cout<< "The array is:";
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<< " ";
    }
    return 0;
}
int main() 

{ 

    int size;
    cout<< "Enter the size of the array: "<< endl;
    cin>>  size;
    int arr[100];
    cout<< "Enter the array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    printarr(arr,size);
    int small=INT_MAX ,large=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (small>arr[i])
        {
            small=arr[i];
        }
       
    }
    for (int i = 0; i < size; i++)
    {
        if (large< arr[i])
        {
            large = arr[i];
        }
        
    }
    
    cout<< "\nThe largest element is:"<< large << endl;
    cout<< "\nThe smallest element is: "<< small << endl;

    
    return 0; 

}