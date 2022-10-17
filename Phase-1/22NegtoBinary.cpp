//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned long long int i=0,ans = 0;
    if(n<0){
        n = pow(2,16)+n;

    }
    cout <<n <<endl;
    while(n){
        int lastBit = n&1;
        ans = (pow(10,1)*lastBit)+ans;
        n= n>>1;
        i++;
        cout <<ans <<endl;
    }
    cout <<ans <<endl;
    
     return 0;
}