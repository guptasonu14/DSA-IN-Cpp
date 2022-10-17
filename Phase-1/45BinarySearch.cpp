#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int firstOcc(int arr[], int n, int key){
    int start =0,end=n-1;
    int mid = start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans =mid;
            end =mid-1;

        }
        //go to right wala part
        else if(key>arr[mid]) {
            start = mid+1;

        }
        else if(key<arr[mid]) {
            end=mid-1;

        }

        mid = start + (end-start)/2;
    }
    return ans;

}
int lastOcc(int arr[], int n, int key){
    int start =0,end=n-1;
    int mid = start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans =mid;
            start =mid+1;

        }
        //go to right wala part
        else if(key>arr[mid]) {
            start = mid+1;

        }
        else if(key<arr[mid]) {
            end=mid-1;

        }

        mid = start + (end-start)/2;
    }
    return ans;

}

int main(){

    int even[7]={1,2,3,4,5,7,9};

    cout<<"First Occurence of 3 is at index "<<firstOcc(even,7,3)<<endl;
     cout<<"last Occurence of 3 is at index "<<lastOcc(even,7,5)<<endl;
     return 0;
}