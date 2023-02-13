//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    cout << "printing top element" << s.top() <<endl;

    if(s.empty()){
        cout<<"Stack is empty"<< endl;
    }
    else{
        cout<<"Stack is not empty"<< endl;
    }
     return 0;
}