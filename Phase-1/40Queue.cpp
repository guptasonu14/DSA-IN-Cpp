#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     queue<string> q;
      q.push("sonu");
       q.push("kumar");
        q.push("gupta");

             cout<<"Size before pop"<<q.size()<<endl;

        cout<<"First Element"<<q.front()<<endl;

        q.pop();
        cout<<"First Element"<<q.front()<<endl;

        cout<<"Size after pop"<<q.size()<<endl;
     
}