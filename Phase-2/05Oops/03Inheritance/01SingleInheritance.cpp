//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Animal{
    //parent class
    public:
    void eat(){
        cout<< "eating" << endl;
    }
    };
    //child class
    class Dog: public Animal{
        public:
        void bark(){
            cout << "barking";
        }
    };


int main(){
    // Creating an object of the child class 
    Dog obj;
    //calling methods
    obj.eat();
    obj.bark();
     return 0;
}