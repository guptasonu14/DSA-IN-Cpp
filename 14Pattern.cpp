#include<iostream>
//#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;

    int row=1,
    toPrint =1;
    while (row<=n)
    {
        int col=1;
        while (col<= row)
        {
            cout<<toPrint<<" ";
            toPrint = toPrint+1;
            col = col+1;

        }
        cout << endl;
        row = row+1;
        
    }
    

     return 0;
}