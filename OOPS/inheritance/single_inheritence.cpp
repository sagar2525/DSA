#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;


class account{
    public:
    float balance = 50000;

};
class work:public account{
    public:
    float salary = 20000;
};
int main(){
    work w1;

    cout<<w1.balance<<endl;
    cout<<w1.salary<<endl;
    cout<<"Total balance is: "<<w1.balance + w1.salary<<endl;
    return 0;
}