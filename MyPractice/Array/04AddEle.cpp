#include <iostream>
using namespace std;
int main() {
    int n; //size of first array
    int m; //size of second array
    cin >> n >> m;
    int array1[n];
    int array2[m];
    int result = 0;
    // taking input in array1
    for (int i = 0; i < n; i++) {
        cin >> array1[i];
    }
    // taking input in array2
    for (int i = 0; i < m; i++) {
        cin >> array2[i];
    }
    for (int i = 0; i < n; i++) {
        result += array1[i];
    }
    for (int i = 0; i < m; i++) {
        result += array2[i];
    }
    cout << result;
    return 0;
}