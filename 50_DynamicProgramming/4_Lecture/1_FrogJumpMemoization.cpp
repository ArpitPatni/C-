// Time complexity O(n)
// Space Complexity O(n)+O(n)-Recursion stack space + Dp array space

int solve(int index,vector<int>&heights,vector<int>&dp){
    if(index==0) return 0;
    if(dp[index]!=-1) return dp[index];
    int left=solve(index-1,heights,dp)+abs(heights[index]-heights[index-1]);
    int right=INT_MAX;
    if(index>1){
        right=solve(index-2,heights,dp)+abs(heights[index]-heights[index-2]);
    }
    return dp[index]= min(left,right);
}