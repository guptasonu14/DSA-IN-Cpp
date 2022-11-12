//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class HelloWorld{
    public:
    //constructor
    HelloWorld(){
        cout<<"Constructor is called" << endl;
    }
    //Destructor
    ~HelloWorld(){
        cout<<"Destructor is called" << endl;
    }
    //Member function
   void display(){
     cout<<"Hello World!"<<endl;
   }
};

int main(){
    //Object created
   HelloWorld obj;
   //Member function called
   obj.display();
    
     return 0;
}