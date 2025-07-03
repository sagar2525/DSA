#include<bits/stdc++.h>
using namespace std;


class Student{
    private:
    string gf;

    public:

    Student(){
        cout<<"Constructor called"<<endl;
    }
    // paramiterized constructor
    Student(int id, int age, bool present, string name, int nos ,string gf){
        this->id=id;
        this->age=age;
        this->present=present;
        this->name=name;
        this->nos=nos;
        this->gf=gf;
        cout<<"with gf constructor called"<<endl;   
    }
    Student(int id, int age, bool present, string name, int nos){
        this->id=id;
        this->age=age;
        this->present=present;
        this->name=name;
        this->nos=nos;
        cout<<"with out gf constructor called"<<endl;
    }
    int id;
    int age;
    bool present;
    string name;
    int nos;
    
    void study(){
        cout<<"Student is studying"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }

    private:
    void gfchatting(){
        cout<<"chatting"<<endl;
    }
};

int main(){
    Student s1;
    
    Student s2 (2,18,1,"sagar",4,"motu");

    cout<<s2.id<<endl;
    cout<<s2.age<<endl;
    cout<<s2.present<<endl;
    cout<<s2.name<<endl;

    Student s3 (2,20,1,"kalu",4);

    cout<<s3.id<<endl;
    cout<<s3.age<<endl;
    cout<<s3.present<<endl;
    cout<<s3.name<<endl;
    
}

