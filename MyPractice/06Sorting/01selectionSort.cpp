//#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

void sortarray(int *arr ,int n){
    
    for(int i = 0;i <n-1;i++){
        int minIndex = i;

        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
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