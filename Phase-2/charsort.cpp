//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

const int max_char = 26;

void sortString(string &str){
    int charCount[max_char] = {0};

    for (int i=0; i<str.length(); i++)
 
        charCount[str[i]-'a']++;   
     
 
    for (int i=0;i<max_char;i++)
        for (int j=0;j<charCount[i];j++)
            cout << (char)('a'+i);
}


int main(){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               

















                                                                                                                                                                                                                   
    string s;
    cin >> s;

    sortString(s);
     return 0;
}