#include <iostream>
using namespace std;

template <class T1, class T2>
class num{
    T1 a;
    T2 b;
    public:
    num(T1 x, T2 y){
        a = x;
        b = y;
    }
    void display(){
        cout<<a+b<<endl;
    }
};
int main(){
    num<int, float> n1(10, 20.5);
    n1.display();
    num<char, string> n2('A', "Hello");
    n2.display();
    return 0;
}


