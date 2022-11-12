//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class construct{
    public:
    int a;
    int b;

    //parameterized constructor
    construct(int x,int y){
        a=x;
        b = y;
    }
};

int main(){
     construct c(40, 50);
    cout << "a: " << c.a << endl <<
        "b: " << c.b;
    
     return 0;
}