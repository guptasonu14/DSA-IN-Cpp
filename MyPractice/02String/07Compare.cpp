//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    char str1[50] = "Coding";
    char str2[50] = " Ninjas!";
    int res1 = strcmp(str1, str2);
    int res2 = strcmp(str2, str1);
    cout << res1 << endl;
    cout << res2 << endl;

    */
/*
    string str1 = "Coding";
    string str2 = " Ninjas!";
    string str3 = "Coding";
    int res1 = str1.compare(str2);
    int res2 = str2.compare(str1);
    int res3 = str3.compare(str1);
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3 << endl;

*/

    string str1 = "Coding";
    string str2 = " Ninjas!";
    string str3 = "Coding";
    bool res1 = str1 == str2;
    bool res2 = str2 < str1;
    bool res3 = str3 != str1;
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3 << endl;

     return 0;
}