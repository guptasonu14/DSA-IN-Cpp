//#include<iostream>
#include <bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
 //creation
    unordered_map<string,int> m; 

    //insertion method-1

    pair<string ,int> p = make_pair("babbar" ,3) ;
    m.insert(p);

    //insertion method-2
    pair<string,int> pair2("love",2);
    m.insert(pair2);

        //insertion method-3
        m["mera"] =1;

    //search
    cout <<m["mera"] << endl; 
    cout <<m.at("babbar") << endl;  

    //size
    cout <<m.size()<<endl;    

    //to check persence
    cout << m.count("love")<<endl; 

    //erase
    m.erase("love");
    cout<<m.size()<<endl;


     return 0;
}