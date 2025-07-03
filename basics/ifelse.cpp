#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    if(x>90){
        cout << "Grade is A" << endl;
    }
    else if(x>80){
        cout << "grade is B" << endl;
    }
    else if(x>70){
        cout << "grade is C" << endl;
    }
    else if(x>60){
        cout << "grade is D" << endl;
    }
    else{
        cout << "grade is F" << endl;
    }
    return 0;


}