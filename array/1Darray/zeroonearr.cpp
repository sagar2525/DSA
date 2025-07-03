#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,0,1,1,1,0,0,1,1,0,0,1,0,1,1};
    int size = 15;
    
    int numone=0;
    int numzero=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            numone++;
        }
        if(arr[i]==0){
            numzero++;
        } 
    }
    cout<<"Number of zero are :"<<numzero<<endl<<"Number of one are :"<<numone<<endl;
}