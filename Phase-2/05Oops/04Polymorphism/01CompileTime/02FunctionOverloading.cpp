#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// Function overloading with different types of arguments:

//function with two interger parameters

int add(int num1,int num2){
    return num1+num2;
}

//function with two double parameter
double add(double num1, double num2){
    return num1+num2;
}
int main(void){
    cout<<add(50,30) << endl;
    cout<<add(10.4,20.5)<< endl;
     return 0;
}