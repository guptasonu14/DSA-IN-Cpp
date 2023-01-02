//#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//fibonacci series using loop 

int fib(int n){
    if(n==1 || n==2)

    return n-1;

    int a=0 ,b=1;
    int ans;

    for(int i=3;i <=n;i++){
        ans =a+b;
        a=b;
        b= ans;
    }
    return ans;
}



int main(void){
    
    int n;
    cin >> n;

    cout << "nth Fibonacci number is" << fib(n) << endl;
     return 0;
}