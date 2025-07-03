#include<bits/stdc++.h>
using namespace std;

int  main(){
    int arr[] ={2,3,2,234,11234,4453,331,313};
    int size = 8;
    int a= INT_MIN;
    int b= INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[a]){
            arr[a] = arr[i];
        }
    }
    cout<<arr[a]<<endl;
    for(int i=0;i<size;i++){
        if(arr[i]<arr[b]){
            arr[b] = arr[i];
        }
    }
    cout<<arr[b]<<endl;
}