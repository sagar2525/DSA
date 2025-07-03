#include<bits/stdc++.h>
using namespace std;

int main(){
    int rowcount, colcount;
    cin >> rowcount; 
    cin >> colcount;

    for(int row=0;row<rowcount;row=row+1){
        if(row==0 || row==rowcount-1 ) {
            for(int col=0;col<colcount;col++){
                cout <<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int i=0;i<colcount-2;i=i+1){
                cout <<"  ";
            }
            cout << "* ";
        }
        cout<<endl;
        
    }
}