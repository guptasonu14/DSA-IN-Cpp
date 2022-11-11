//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int add(int x ,int y,int z= 0,int w=0){
    return(x+y+z+w);
}

int main(){
    cout << add(10,20) << endl;
    cout << add(10,20,30) << endl;
    cout << add(10,20,30,40)<<endl;
    
     return 0;
}