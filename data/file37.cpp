#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
    sort(arr, arr + n);
    int c = 0;

    for (int i = 0; i < n - 1; i++) {
        int x = k - arr[i];
        
        int y = lower_bound(arr + i + 1, arr + n, x) - arr;
        int z = upper_bound(arr + i + 1, arr + n, x) - arr;
        
        c += z - y;
    }
    
    return c;
}

int main() {
    int arr[] = { 1, 5, 7, -1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    cout << "Count of pairs is " << getPairsCount(arr, n, k);

    return 0;
}
