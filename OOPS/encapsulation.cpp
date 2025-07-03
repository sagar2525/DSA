#include<iostream>
using namespace std;

class Animal{
    private:
        int age;
        int weight;

    public:
          void eat(){
            cout<<"eating "<<endl;

        }
        int getage(){
            return this->age;
        }
        void setage(int age){
            this->age=age;
        } 
};

int main(){
    cout<<"Hello World"<<endl;
    return 0;

}