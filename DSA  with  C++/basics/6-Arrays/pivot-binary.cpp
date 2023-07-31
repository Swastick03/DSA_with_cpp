#include <iostream> 

using namespace std;

int pivot(int arr[],int size){
    int s=0, e=size-1;
    int mid=s+(e-s)/2;
    while (s<e){
        if (arr[mid]>=arr[0])
        { 
            s=mid+1;
        }
        else 
        {
            e=mid;
        }
        
        mid=s+(e-s)/2;
        
    }
   return s;
    
}
int main() 

{ 
    int even[6]={6,7,9,1,2,3};
    cout<< "Pivot element is: "<< even[pivot(even,6)]<< endl;
    
    return 0; 

}