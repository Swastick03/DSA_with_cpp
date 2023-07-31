#include <iostream> 

using namespace std;
int binarysearch(int arr[], int size, int key){
    int start=0;
    int end =size-1;
    int mid = (start+end)/2;

    while (start <= end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (key> arr[mid])
        {
            start=mid+1;
        }
        if (key<arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
        
    }
    return -1;
}
int main() 

{ 

    int even[8]= {1,3,4,7,8,23,43,54};
    int odd[5]={2,6,7,9,23};

    int index= binarysearch(even,8,8);
    cout<< "The index of 8 is: "<< index << endl;
    cout<< "The index of 23 is: "<<binarysearch(odd,5,23) << endl;
    return 0; 

}   