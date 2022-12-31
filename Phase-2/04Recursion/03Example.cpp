//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){

    //base case
    if(n==0){
    return ;
}
// tail recursion
/*
cout << n << endl;
print(n-1);
*/

//head recursion
print(n-1);
cout << n << endl;

}


int main(){
     int n;
    cin >> n;
    print(n);
    
     return 0;
}