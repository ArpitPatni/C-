#include <bits/stdc++.h> 
   int robHelper(vector<int>&arr,int i,vector<int>&dp){
       dp[0]=arr[0];
       int neg=0;
       for(int i=1;i<arr.size();i++){
           int take=arr[i];
           if(i>1){
               take+=dp[i-2];
           }
           int notTake=0+dp[i-1];
           dp[i]=max(take,notTake);
       }
    return dp[i];
    }
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
         int n=nums.size();
        vector<int>dp(n,0);
        return robHelper(nums,n-1,dp);
}