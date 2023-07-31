#include <iostream> 

using namespace std;
void printarr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    
}
void dorting(int arr[], int n){
int i=0 , j=n-1;
while (i<j)
{
    if (arr[i]==0 && i<j)
    {
        i++;
    }
    else if (arr[j]==1 && i<j)
    {
        j--;
    }
    else if (arr[i]==1 && arr[j]==0 && i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
}


}
int main() 

{ 

    int arr[8]={1,0,0,1,0,1,1,1};
    dorting(arr, 8);
    printarr(arr,8);
    return 0; 

}