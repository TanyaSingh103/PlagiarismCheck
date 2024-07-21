
#include <bits/stdc++.h>
using namespace std;

int missingNumber(int n, vector<int>& arr)
{

    vector<int> hash(n + 1, 0);

    for (int i = 0; i < n - 1; i++) {
        hash[arr[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = { 1, 2, 3, 5 };
    int n = 5;
    cout << missingNumber(n, arr);
}
