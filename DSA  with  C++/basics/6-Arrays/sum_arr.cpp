#include <iostream> 

using namespace std;
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
    cout<< "The array is: ";
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] <<" ";
        sum=sum+arr[i];
    }
    
    cout<< "\nThe sum of the array is: " << sum << endl;
    
    return 0; 

}