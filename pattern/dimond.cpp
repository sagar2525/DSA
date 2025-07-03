#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // /hollow dimond
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n+1;j++ ){
            // if first character or last character then *
            if(j==0||j==2*i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<i;j++){
            cout<<" ";
    }
    // star
    for(int j=0;j<2*n-2*i-1;j++){
        if(j==0||j==2*n-2*i-2){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;

}
}


    // full dimond
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j=j+1){
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j=j+1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j=j+1){
//             cout<<" ";
//         }

//         for(int j=0;j<n-i;j=j+1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }