//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//parent class
class Animal{
    public:
    void eat(){
        cout << "eating" <<endl;
    }
};
//child class1
class Dog: public Animal{
    public:
    void bark(){
        cout << "barking"<<endl;
    }
};
//child class2
class Cat: public Animal{
    public:
    void meow(){
        cout << "meowing" << endl;
    }
};

int main(){
    Cat obj;
    obj.eat();
    obj.meow();
    
     return 0;
}