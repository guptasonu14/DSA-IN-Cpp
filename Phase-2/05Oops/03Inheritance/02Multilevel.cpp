//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 //parent class
 class Animal{
    public:
    void eat(){
        cout << "eating" << endl;
    }
 };

 //child class
 class Dog: public Animal{
    public:
    void bark(){
        cout<< "barking"<<endl;
    }
 };

 class BabyDog: public Dog{
    public:
    void weep(){
        cout<< "weeping" << endl;
    }
 };

int main(){
   // creatiing an object of the child class
   BabyDog obj;
   obj.eat();
   obj.bark();
   obj.weep();
     return 0;
}