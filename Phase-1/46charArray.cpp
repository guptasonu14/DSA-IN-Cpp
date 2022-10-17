#include<iostream>
#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
   if( ch >='a' && ch<='z')
   return ch;
   else{
    char temp = ch-'A'+'a';
    return temp;
   }
}

bool checkPalindrome(char a[],int n){
    int s=0;
    int e = n-1;
     while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
     }
     return 1;
}

void reverse(char name[],int n){
    int start=0;
    int end = n-1;

    while(start<end){
        swap(name[start++],name[end--]);
    }
}

int getLength(char name[]){
    int count =0;
    for(int i=0;name[i] != '\0';i++ ){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>> name;
    
    cout<<"your name is ";
    cout<< name <<endl;

    int len =getLength(name);
    
    cout<<"Length:"<<len<<endl;
    reverse(name,len);
      cout<<"your name is ";
      cout<< name <<endl;


      cout << "Palidrme or Not:" << checkPalindrome(name,len) << endl;

    
     return 0;
}