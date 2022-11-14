//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    {
        try{
            int age ;
            cin>> age;
            if(age >= 18){
                cout << "You are eligible to vote" << endl;
            }
            else{
                throw(age);
            }
        }
        catch(int age){
                 cout << "Sorry, you are not eligible to vote" << endl;
                 cout << "Your age is: " << age;
        }
    }
   
}