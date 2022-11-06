//#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// parent claas 1
class Vehical{
    public:
    Vehical(){
        cout << "This is a vehical" << endl;

    }
};
//parent class2
class Fare{
    public:
    Fare(){
        cout << "Fare of vehical" << endl;
    }
};
//child class1
class Car: public Vehical{

};
//child class 2
class Bus: public Vehical,public Fare{

};

int main(){
    //creating object of sub class will
    //invoke the constructor of base class

    Bus obj2;

    
     return 0;
}