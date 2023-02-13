#include <iostream>
using namespace std;
int main() {
    int n; //size of array
    cin >> n;
    int arr[n];
    // taking input in arr
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Maximum Value = " << max << "\n";
    cout << "Minimum Value = " << min;
    return 0;
}