#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int a=INT_MIN;


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>a){
                a = arr[i][j];
            }
        }
    }

    cout<<a<<endl;
    return 0;
}