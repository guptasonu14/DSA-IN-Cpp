//#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int *p){
    cout << *p << endl;
}

void update(int *p){
     p =p+1;
     cout <<"inside"<< p << endl;
}

int getSum(int arr[] ,int n){

   
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
     int value =5;
     int *p = &value;
      cout <<"before"<< p << endl;
     print(p);
       cout <<"after"<< p << endl;
     update(p);


     int arr[5] = {1,2,3,4,5};
     cout << "Sum is " << getSum(arr,5) <<endl;
     return 0;
}