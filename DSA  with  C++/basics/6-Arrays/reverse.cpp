#include <iostream> 

using namespace std;
int printarray(int arr[100],int size)
{
    cout<< "\n The array is:" <<endl;
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}

int reverse(int arr[100],int size)
{
    int temp;
    int j;
    for (int i = 0,j=size-1; i < size/2; i++,j--)
    {
        temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return 0;
}
int main() 

{ 

    //  int size;
    // cout<< "Enter the size of the array: "<< endl;
    // cin>>  size;
    // int arr[100];
    // cout<< "Enter the array :" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>> arr[i];
    // }

    int arr[6]={12,5,6,8,3,9};
    int brr[5]={34,5,6,43,2};
    reverse(arr,6);
    reverse(brr,5);
    printarray(arr,6);
    printarray(brr,5);
    return 0; 

}