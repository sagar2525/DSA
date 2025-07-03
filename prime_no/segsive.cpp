#include<bits/stdc++.h>
using namespace std;

vector<bool>segsieve(int L , int R ){
    vector<bool>sieve=sieve(sqrt(R));
    vector<int>baseprime;
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            baseprime.push_back(i);
        }
    }
}
int main(){

}