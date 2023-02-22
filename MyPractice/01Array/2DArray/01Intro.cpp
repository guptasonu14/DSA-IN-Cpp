//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    //creating 2d Array
    int arr[3][4];
/*
    //taking input -> row wise input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
*/
    //taking input -> column wise input
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin >> arr[j][i];
        }
    }
    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }

    
     return 0;
}