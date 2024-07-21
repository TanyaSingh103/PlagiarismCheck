#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int stockPrice(vector<int>& arr, int n, int curr, int prev, vector<vector<int>>& dp) {
    if (curr == n) 
        return 0;

    if (dp[curr][prev + 1] != -1) // Check if already calculated
        return dp[curr][prev + 1];

    int include = 0, exclude = 0;

    if (prev == -1 || arr[curr] >= arr[prev])
        include = arr[curr] + stockPrice(arr, n, curr + 1, curr, dp);

    exclude = stockPrice(arr, n, curr + 1, prev, dp);
    dp[curr][prev + 1] = max(include, exclude);

    return dp[curr][prev + 1];
}

int maxProfit(vector<int>& stocks) {
    int n = stocks.size();
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return stockPrice(stocks, n, 0, -1, dp);
}

int main() {
    vector<int> stocks = {10, 20, 30, 25, 35, 40, 45};
    cout << "Maximum profit: " << maxProfit(stocks) << endl;
    return 0;
}
