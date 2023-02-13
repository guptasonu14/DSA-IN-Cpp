//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "Sonu";
    string str2 = "Gupta";

    cout << "Your concantenation : "<< endl;

    //str1 = str1+ str2;

    str1.append(str2);

    cout << str1 ;
     return 0;
}