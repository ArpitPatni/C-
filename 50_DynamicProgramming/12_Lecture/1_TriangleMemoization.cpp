Time complexity-O(n*n)
Space complexity-O(N) RSS + O(n*n) matrix
class Solution
{
public:
    int solve(int i, int j, vector<vector<int>> &triangle, vector<vector<int>> &dp, int n)
    {
        if (i == n - 1)
            return triangle[n - 1][j];
        if (dp[i][j] != -1)
            return dp[i][j];
        int down = triangle[i][j] + solve(i + 1, j, triangle, dp, n);
        int diagonal = triangle[i][j] + solve(i + 1, j + 1, triangle, dp, n);
        return dp[i][j] = min(down, diagonal);
    }
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(0, 0, triangle, dp, n);
    }
};