#include <bits/stdc++.h>
using namespace std;

int getPairsCount(vector<int> &arr, int n, int k) {
    sort(arr.begin(), arr.end());
    int c = 0;

    for (int i = 0; i < n - 1; i++) {
        int x = k - arr[i];

        // Using arr.begin() and arr.end() instead of arr + i + 1
        auto y = lower_bound(arr.begin() + i + 1, arr.end(), x);
        auto z = upper_bound(arr.begin() + i + 1, arr.end(), x);

        c += z - y;
    }

    return c;
}

int main() {
    vector<int> arr = { 1, 5, 7, -1 };
    int n = arr.size();
    int k = 6;

    cout << "Count of pairs is " << getPairsCount(arr, n, k);

    return 0;
}
