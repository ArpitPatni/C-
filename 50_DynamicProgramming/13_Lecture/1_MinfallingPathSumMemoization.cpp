Time complexity-O(N*M);
Space complexity-O(N*M)+O(N)(RSS)

int solve(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>&dp){
    int n=matrix.size();
    int m=matrix[0].size();
    if(j<0 || j>=m) return 1e9;
    if(i==0) return matrix[0][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int top=matrix[i][j]+solve(i-1,j,matrix,dp);
    int leftDiagonal=matrix[i][j]+solve(i-1,j-1,matrix,dp);
    int rightDiagonal=matrix[i][j]+solve(i-1,j+1,matrix,dp);
    return dp[i][j]=min(top,min(rightDiagonal,leftDiagonal));
}