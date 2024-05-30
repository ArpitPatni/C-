class Solution {
public:
    int robHelper(vector<int>&arr,int i,vector<int>&dp){
        if(i==0) return arr[0];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int robAmount1=arr[i]+robHelper(arr,i-2,dp);
        int robAmount2=0+robHelper(arr,i-1,dp);

        return dp[i]= max(robAmount1,robAmount2);

    }
    int rob(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n+1,-1);
        return robHelper(arr,n-1,dp);
    }
};