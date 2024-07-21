#include<iostream>
#include<vector>
using namespace std;

int longest_inc(vector<int>& arr,int curr,int prev,vector<vector<int>>dp)
{
    if(curr==arr.size())
        return 0;

    if(dp[curr][prev+1]!=-1)
        return dp[curr][prev+1];

    int notTake = 0 + longest_inc(arr, curr+1, prev, dp);

    int take=0;
    if(prev==-1||arr[curr]>arr[prev]){
        take=1+longest_inc(arr,curr+1,curr,dp);
    }

    return dp[curr][prev+1] = max(take, notTake);
}

int main()
{
    vector<int>arr={10,20,30,25,35,40,45};
    vector<int>arr1={5, 4, 3, 2, 1} ;
    int n=arr.size();
    int prev=-1,curr=0;
    vector<vector<int>> dp(n, vector<int>(n, -1));
    cout<<"Longest increasing subsequence for test case 1 is:"<<longest_inc(arr,curr,prev,dp)<<endl;
    cout<<"Longest increasing subsequence for test case 2 is:"<<longest_inc(arr1,curr,prev,dp);
}
