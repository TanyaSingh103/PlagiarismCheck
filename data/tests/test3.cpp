#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int solve(int curr,int prev,vector<int> &nums,vector<vector<int>> &dp)
{
    if(curr >= nums.size() )
    {
        return 0;
    }
    if(dp[curr][prev+1] != -1)
    {
        return dp[curr][prev+1];
    }
    int take = INT_MIN;
    if(prev == -1 || nums[curr] > nums[prev])
    {
        take = 1 + solve(curr + 1,curr,nums,dp);
    }
    int not_take = solve(curr+1,prev,nums,dp);

    return dp[curr][prev+1] = max(take,not_take);
}

void  increasing_streak(vector<int> v)
{
     vector<vector<int>> dp(v.size(),vector<int>(v.size(),-1));
     int ans = solve(0,-1,v,dp);
    if(ans == 0)
    {
        cout<<"Null array has been passed"<<endl;
    }
    else if(ans == 1)
    {
        cout<<"There are no increasing streaks; the longest streak with rising prices is of length 1."<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }

}
int main()
{

    vector<int> v1 = {10,20,30,25,35,40,45};
    increasing_streak(v1);


    vector<int> v2 = {5,4,3,2,1};
       increasing_streak(v2);


    vector<int> v3 = {};
      increasing_streak(v3);


     vector<int> v4 = {1};
       increasing_streak(v4);

       vector<int> v5 = {2,8,9,11,1,9,-1,4,6};
       increasing_streak(v5);


       vector<int> v6 = {5,10,4,6,7,8};
       increasing_streak(v6);


}
