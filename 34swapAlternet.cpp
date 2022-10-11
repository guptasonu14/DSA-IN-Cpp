#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }cout<<endl;
}





void swapAlternatee(int arr[], int size){

    for(int i=0;i<size;i+=2){
        if(i+1< size){
            swap(arr[i],arr[i+1]);
        }    }
}

int main(){
    int even[8] = {5,6,7,3,8,9,1,2};
    int odd[5] = {11,33,9,67,34};

    swapAlternatee(even,10);
    printArray(even,8);

cout<< endl;

swapAlternatee(odd,5);
printArray(odd,5);
     return 0;
}