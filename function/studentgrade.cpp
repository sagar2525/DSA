#include<bits/stdc++.h>
using namespace std;

char getgrade(int marks){
        if(marks>=90){
            return 'A';
        }
        else if(marks>=80){
            return 'B';
        }
        else if(marks>=70){
            return 'C';
        }
        else if(marks>=60){
            return 'D';
            }
        else{
            return 'F';
        }    

}

int main(){
    int marks;
    cout<<"enter marks"<<endl;
    cin>>marks;

    char finalgrade = getgrade(marks);
    cout<<finalgrade<<endl;
    return 0;


    
}