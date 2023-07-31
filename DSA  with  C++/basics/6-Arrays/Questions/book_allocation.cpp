// link==   https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=1
bool ispossible(vector<int> arr, int n, int m, int mid){
    int pagesum=0;
    int studentc=1;
    for(int i=0; i<n ; i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentc++;
            if(mid<arr[i] || studentc>m){
                return false;
                
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
   int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}


