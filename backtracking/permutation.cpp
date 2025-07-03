#include<iostream>
using namespace std;
void printpermutation(string &str ,int i){
    // base case
    if(i >= str.length()){
        cout<<str<<" ";
        return;
    }
    // swapping  
    for(int j =i;j<str.length();j++){
        swap(str[i],str[j]);
        // rec call
        printpermutation(str,i+1);
        // backtracking
        swap(str[i],str[j]);
    }
}
int main(){
    string str = "abc";
    int i =0;
    printpermutation(str,i);
    return 0;
}