#include <iostream> 

using namespace std;
int peak(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]<=arr[mid+1])
        {
            s=mid+1;
        }
        if (arr[mid]>=arr[mid+1])
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main() 

{ 

    int arr[7]={2,6,8,9,3,2,1};
    cout<<"The index of peak is:" <<peak(arr,7)<< endl;
    return 0; 

}