#include<bits/stdc++.h>
using namespace std;

class Animal{
    
    protected:
    int age;
    int weight;
        void eat(){
            cout<<"eating "<<endl;
        }
};

class cat :private Animal{
    public:
    void accessEat() {
        eat();
    }
    void meow(){
        cout<<"meow"<<endl;
        
    }
};

int main(){
    cat c1;
    c1.accessEat();
    // c1.eat();
    c1.meow();
}