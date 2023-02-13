//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin ,s);
    int suru= 0;
    int end = s.size()-1;
    int flag = 0;
     while(suru < end){
        if(s[suru] != s[end]){
            flag = 1;
            break;
        }
        suru++;
        end--;
     }
      if (flag == 0)
        cout << "String is palindrome";
    else
        cout << "String is not palindrome";
     return 0;
}