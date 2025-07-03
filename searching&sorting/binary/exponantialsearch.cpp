#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> arr,int s,int e ,int x){
    while(s<=e){
        int mid = s+ (e-s)/2;
        if(arr[mid]==x)
        return mid;
        else if(x>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid -1; 
        }
    }
    return -1;
}

int expo(vector<int> arr, int n , int x){
    if(arr[0]==x) return 0;
    int i=1;
    while(i<n && arr[i]<=x){
        i=i*2;
    }
    return binarysearch(arr,i/2,min(i,n-1),x);
}
int main(){
    vector<int> arr={3,4,5,6,11,13,14,56,70};
    int n=arr.size();
    int x = 13;
    int ans = expo(arr, n , x); 
    cout<<ans<<endl;
    return 0; 
}