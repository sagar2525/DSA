#include<bits/stdc++.h>
using namespace std;

// void max(int arr[],int n,int i, int& maxi){

//     // base case 
//     if( i>=n ){
//         return;
//     }
    
//     // ek case solve ker du
//     // current element is greater than max element
//     if(arr[i]>maxi){
//         maxi = arr[i];
//     }
//    // baki ka kaam reursion smbhal legaa
//     max(arr,n,i+1,maxi);

    

// }
// void max1(int arr[],int n,int i, int& mini){

//     // base case 
//     if( i>=n ){
//         return;
//     }
    
//     // ek case solve ker du
//     // current element is greater than max element
//     mini = min(mini ,arr[i]);
//    // baki ka kaam reursion smbhal legaa
//     max1(arr,n,i+1,mini);

    

// } 

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = 5;
//     int i =0;
//     int maxi = INT_MIN;
//     int mini = INT_MAX;


//     max(arr,n,i,maxi);
//     max1(arr,n,i,mini);
//     cout<<"maximum number is : "<<maxi<<endl;
//     cout<<"minimum number is : "<<mini<<endl;

// }
void findmaxi(int arr[],int n,int i,int& maxi,int& min){
    // base case
    if(i>=n){
        return;
    }
    // 1 case solve ker du 
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }
    // baki recursion smbhal lega 
    findmaxi(arr,n,i+1,maxi,min);
    
}

int main(){
    int arr[] = {10,33,5,23,223,245,968};
    int n = 7;
    int min = INT_MAX;
    int maxi = INT_MIN;
    int i = 0;

    findmaxi(arr,n,i,maxi,min);
    cout<<"maximum number is : "<<maxi<<endl;
    cout<<"minimum number is : "<<min<<endl;
}