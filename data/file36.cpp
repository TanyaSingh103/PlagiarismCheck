#include <bits/stdc++.h>
using namespace std;

int missingNumber(int n, vector<int>& arr)
{
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    int expectedSum = (n * (n + 1)) / 2;

    return expectedSum - sum;
}

int main()
{
    vector<int> arr = { 1, 2, 3, 5 };
    int n = 5;
    cout << missingNumber(n, arr);
    return 0;
}
