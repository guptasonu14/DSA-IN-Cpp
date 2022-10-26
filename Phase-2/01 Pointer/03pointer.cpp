#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void increment(int **p){
  (**p)++;
}

int main(){
   /* float f =10.5;
    float p =2.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr <<" " << f << " " << p;

    int a =7;
    int b = 17;
    int*c = &b;
    *c =7;
    cout << a <<" " << b << endl;
*/
    /*int *ptr = 0;
    int s = 10;
    *ptr = s;
    cout << *ptr << endl;
     return 0;*/

   /* char ch = 'a';
     char* ptr = &ch;
     ch++;
     cout << *ptr << endl;

     int a = 7;
     int *c = &a;
     c = c+3;
     cout << c << endl;
     */ 
    
  /*  int arr[]={4,5,6,7};
    int *p = (arr+1);
    cout <<*arr+9 ;
    

    char b[] = "xyz";
    char *c = &b[0];
    cout << c <<endl;
*/
  /*  char s[]= "hello";
    char *p = s;
    cout << s[0] << " " <<p[0];


*/

/* char arr[20];
int i;
for(i =0;i<10;i++){
    *(arr+i) = 65+i;

}
*(arr +i) = '\0';
cout << arr;
*/

/* int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
 cout << numbers[n] << ",";
  }
*/
 /* float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1;
*/

/*  int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;
  */  
  /*int ***r, **q, *p, i=8;
  p = &i;
  (*p)++;
  q = &p;
  (**q)++;
  r = &q;
  cout<<*p << " " <<**q << " "<<***r;
*/

int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
    return 0;

}