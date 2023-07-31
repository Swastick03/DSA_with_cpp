#include <iostream> 

using namespace std;
void swapalter(int arr[100], int size)

{
    int temp;
    for (int i = 0; i < size; i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    // printing of the number

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<< " ";
    }
    
}
int main() 

{ 
    int arr[6]={12,5,6,9,2,1};
    swapalter(arr,6);
    
    return 0; 

}