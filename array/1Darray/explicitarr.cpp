#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,4,32,65,53};
    int size=6;
    int start = 0;
    int end = size-1;

    while(start<=end){
        cout<<arr[start]<<" ";
        start++;
        cout<<arr[end]<<" ";
        end--;
    }

}