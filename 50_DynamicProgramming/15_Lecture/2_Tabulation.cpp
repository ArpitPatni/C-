// Time complexity-N*target
// Space complexity-N*target

bool subsetSumToK(int n, int k, vector<int> &arr)
{
    // Write your code here.
    vector<vector<bool>> dp(n + 1, vector<bool>(k + 1, 0));
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = true;
    }
    dp[0][arr[0]] = true;
    for (int index = 1; index < n; index++)
    {
        for (int target = 1; target <= k; target++)
        {
            bool notTake = dp[index - 1][target];
            bool take = false;
            if (arr[index] <= target)
            {
                take = dp[index - 1][target - arr[index]];
            }
            dp[index][target] = take | notTake;
        }
    }
    return dp[n - 1][k];
}