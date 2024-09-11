int minFallingPathSum(vector<vector<int>> &matrix)

    int mini = 1e9;
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    vector<int> prev(m, 0), curr(m, 0);
    for (int j = 0; j < m; j++)
    {
        dp[0][j] = matrix[0][j];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int top = matrix[i][j] + dp[i - 1][j];
            int leftDiagonal = matrix[i][j];
            if (j - 1 >= 0)
            {
                leftDiagonal += dp[i - 1][j - 1];
            }
            else
            {
                leftDiagonal += 1e9;
            }
            int rightDiagonal = matrix[i][j];
            if (j + 1 < m)
            {
                rightDiagonal += dp[i - 1][j + 1];
            }
            else
            {
                rightDiagonal += 1e9;
            }
            dp[i][j] = min(top, min(rightDiagonal, leftDiagonal));
        }
    }

    for (int j = 0; j < m; j++)
    {
        mini = min(mini, dp[n - 1][j]);
    }
    return mini;
