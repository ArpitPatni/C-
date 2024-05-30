// Steps to write the tabulation solution
// 1.Declare DP array.
// 2.Write base cases for DP array
// 3.Write for loop similar to recursion call
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int>dp(n+1,-1);
    dp[0]=0;
    for(int i=1;i<n;i++){
        int firstStep=dp[i-1]+abs(heights[i]-heights[i-1]);
        int secondStep=INT_MAX;
        if(i>1){
            secondStep=dp[i-2]+abs(heights[i]-heights[i-2]);
        }
        dp[i]=min(firstStep,secondStep);
    }
    return dp[n-1];
}