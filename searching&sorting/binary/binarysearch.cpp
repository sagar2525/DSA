#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int target,int size){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1; 
        }
        mid=(start+end)/2;
    }
    return -1;
     
}



int main(){
    int arr[]={1,3,5,7,9,11,13,15,17};
    int target=20;
    int size=sizeof(arr)/sizeof(arr[0]);

    int indexoftarget = binarysearch(arr,target,size);

    if(indexoftarget==-1){
        cout<<"target not found";
    }
    else{
        cout<<"target found at : "<<indexoftarget<<endl;

    }
    return 0;

}