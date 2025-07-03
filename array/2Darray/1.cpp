#include<bits/stdc++.h>
using namespace std;

int main(){
    // declartion
    int arr[4][3];

    // initialisation 
    int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<"value in index is :"<<brr[2][2]<<endl;


    // // row-wise printing 
    // // outer loop
    // cout<<endl;
    // for(int i=0;i<3;i++){
    //     // for ever row we need to print value in each coulum 
    //     for(int j=0;j<3;j++){
    //         cout<<brr[i][j]<<" ";

    //     }
    //     cout<<endl; 
    // }
    // // column-wise printing 
    // cout<<endl;
    // for(int i=0;i<3;i++){
    //     // for ever row we need to print value in each coulum 
    //     for(int j=0;j<3;j++){
    //         cout<<brr[j][i]<<" ";

    //     }
    //     cout<<endl; 
    // }
    int row =4;
    int col=3;

    // row=wise input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }   
    }
    cout<<"printing row wise"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    

    // // col=wise input
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cin>>arr[j][i];
    //     }   
    // }
    return 0;
}