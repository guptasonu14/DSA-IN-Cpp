#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  /* int i =5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    //or
    int *p =0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;
    */
//////////////////////////////////////////////
    int num = 5;
    int a = num;
    a++;
    cout << num << endl;

    int *s = &num;
    cout <<"before"<< num << endl;

    (*s)++;
    cout << "after" << num << endl;
   
    /// copying a pointer
    
    int *f = s;
    cout << s << "-" << f << endl;
    cout << *s <<"-" << *f <<endl;


    //Important concept
    int i =3;
    int *t = &i;
    cout << (*t)++ << endl;
      cout <<"before t"<< t << endl;
      t =t+1;
        cout <<"after t"<< t << endl;

     return 0;
}