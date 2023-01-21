//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int max = 0;
    char result;
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
            result = ('a' + i);
        }
    }
    cout << result;
     return 0;
}