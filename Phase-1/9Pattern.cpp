#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/* print 1 2 3 4 
          1 2 3 4           //for n=4
           1 2 3 4 
            1 2 3 4 */

int main(){

    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j<<" ";
              j=j+1;
        }
         cout<<endl;
    i=i+1;
    
      
    }
   


    
     return 0;
}