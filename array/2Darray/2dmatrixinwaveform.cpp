#include<bits/stdc++.h>
using namespace std;

void waveprint2dmatrix(vector<vector<int>> arr){
    int r=arr.size();
    int c=arr[0].size();
    
    for(int col=0;col<c;col++){
        // even col hai to top-bottom
        if((col & 1)==0){
            for(int i=0;i<r;i++){
                cout<<arr[i][col]<<" ";

            }
        }
        else{
            // odd no of col bottom to top
            for(int i=r-1;i>=0;i--){
                cout<<arr[i][col]<<" ";
            }
        }
        
    }
    cout<<endl;
    // wave row wise
    
}

int main(){
    vector<vector<int>> arr {   
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    }; 
    waveprint2dmatrix(arr);
}