//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void sortarray(int *arr ,int n){
    
   for(int i =1;i<n;i++){
        // for round 1 to n-1;
        for(int j=0; j<n-i; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[8] = {90,45,63,78,12,45,18,29};
    sortarray(arr,8);

    for(int i=0; i<8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

     return 0;
}