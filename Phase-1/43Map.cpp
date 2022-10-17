#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> m;

    m[1]="babbar";
    m[2]="love";
    m[3]="Kumar";

    m.insert({5,"bheem"});

    cout<<"before erase"<<endl;

    for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }

    cout<<"finding 13->"<<m.count(3)<<endl;

    m.erase(3);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }

     auto it = m.find(5);
     for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
     }

    
}