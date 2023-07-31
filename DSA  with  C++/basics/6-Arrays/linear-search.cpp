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
    cout<< "The array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<"\n Enter the element you want to search:";
    int se;
    cin>> se;
    for (int  i = 0; i < size; i++)
    {
        if (se==arr[i])
        {
            cout<< "\n It is present!";
        }
        
    }
    
    return 0; 

}