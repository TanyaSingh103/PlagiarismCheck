#include<iostream>
#include<vector>
using namespace std;

int longestInc(vector<int>& arr,int curr,int prev,vector<vector<int>>dp)
{
    if(curr==arr.size())
        return 0;

    if(dp[curr][prev+1]!=-1)
        return dp[curr][prev+1];

    int exclude = 0 + longest_inc(arr, curr+1, prev, dp);
    int include=0;

    if(prev==-1||arr[curr]>arr[prev]){
        include=1+longest_inc(arr,curr+1,curr,dp);
    }
    dp[curr][prev+1] = max(include, exclude);
    return dp[curr][prev+1];
}

int main()
{
    vector<int>arr1={10,20,30,25,35,40,45};
    vector<int>arr2={5, 4, 3, 2, 1} ;
    int n=arr1.size();
    int prev=-1,curr=0;
    vector<vector<int>> dp(n, vector<int>(n, -1));
    cout<<"LIS for test case 1:"<<longest_inc(arr1,curr,prev,dp)<<endl;
    cout<<"LIS for test case 2:"<<longest_inc(arr2,curr,prev,dp);
}
