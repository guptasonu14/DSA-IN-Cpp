
// count ways to reach nth stair

//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n){
     if(n<0)
     return 0;
     //only 1 way to reach the first stair
     //as you are already standing on it

     if(n==0)
     return 1;

     //as you comes from the privious stair
     int penultimate = climbStairs(n-1);

     //you come from the stairs before the previous stair

     int antepenultimate = climbStairs(n-2);

     return penultimate + antepenultimate;

}

int main(){
    int n;
    cin >>n;
    cout << climbStairs(n) << endl;
     return 0;
}