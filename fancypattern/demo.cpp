#include<bits/stdc++.h>
using namespace std;

int main(){
        int a;
        cin >> a;
        for(int i=0;i<a;i++){
                for(int j=0;j<i+1;j++){
                        cout <<i+1;
                        if(j !=i){
                                cout << "*";
                        }
              
                }
                cout << endl;
        }
        for(int i=0;i<a;i++){
                for(int j=0;j<a-i;j++){
                        cout <<a-i;
                        if(j !=a-i-1){
                                cout << "*";
                        }
              
                }
                cout << endl;
        }
}
