//#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//parent class
class Animal{
    public:
    void eat(){
        cout << "eating"<<endl;
    }
};
//parent class
class Dog{
    public:
    void bark(){
        cout<< "barking" << endl;
    }
};
//Inherited class
class BabyDog : public Animal,public Dog{
    public:
    void weep(){
        cout << "weeping" <<endl;
    }
};
int main(){

    //creating an object of the child class
    BabyDog obj;

    //calling method
    obj.eat();
    obj.bark();
    obj.weep();
    
     return 0;
}