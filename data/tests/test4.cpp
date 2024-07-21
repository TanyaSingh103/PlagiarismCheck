#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> ar, int n, int i, vector<int> dp)
{
if(i == n)
return 1;
if(dp[i] != -1)
return dp[i];
int include = 0, exclude = 0;
if(ar[i] > ar[i-1])
include = 1 + solve(ar, n, i+1, dp);
exclude = 0 + solve(ar, n, i+1, dp);
return dp[i] = max(include, exclude);
}
int main()
{
vector<int> ar1 = {10,20,30,35,40,45};
int n1 = ar1.size();
vector<int> dp1(n1, -1);
cout << "Test case 1 : " << solve(ar1, n1, 1, dp1);
vector<int> ar2 = {5,4,3,2,1};
int n2 = ar2.size();
vector<int> dp2(n2, -1);
cout << "\nTest case 2 : " << solve(ar2, n2, 1, dp2);
return 0;
}
