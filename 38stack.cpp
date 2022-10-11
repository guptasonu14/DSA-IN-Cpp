#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    
     stack<string> s;
      s.push("sonu");
       s.push("kumar");
        s.push("gupta");

        cout<<"Top Element->"<<s.top()<<endl;

        s.pop();
        cout<<"Top Element->"<<s.top()<<endl;

        cout<<"Size of Stack->"<<s.size()<<endl;

        cout<<"Empty or not->"<<s.empty()<<endl;
}