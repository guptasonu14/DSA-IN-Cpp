//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    // taking input in arr
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    int count = 0; // Initialize result
    // Consider all possible pairs and check their sums
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                count++;
    cout << "Count of pairs is " << count;
     return 0;
}