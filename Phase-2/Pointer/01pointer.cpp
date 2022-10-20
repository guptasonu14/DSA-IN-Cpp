//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 5;

    cout << num << endl;
     //address of Operator
     cout << "address of num is" << num << endl;

    
     int *ptr = &num;
     cout<<"address is:" << ptr << endl;
     cout<<"value is:" << *ptr << endl;

     double d = 4.3;
     double *p2 = &d;
     cout<<"address is:" << p2 << endl;
     cout<<"value is:" << *p2 << endl;


     cout <<"Size of integer is" << sizeof(num) << endl;
     cout <<"Size of pointer is" << sizeof(ptr) << endl;
     cout <<"Size of pointer is" << sizeof(p2) << endl;


     return 0;
}