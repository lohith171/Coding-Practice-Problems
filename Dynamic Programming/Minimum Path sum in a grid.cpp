//https://leetcode.com/problems/minimum-path-sum/

//Recursive...
int m,n;
 int solve(int i,int j,vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(dp[i][j]!= -1)return dp[i][j];
        if(i==m-1 && j==n-1)return dp[i][j]=grid[i][j];
        else if(i==m-1 && j!=n-1){
            return dp[i][j]=grid[i][j]+solve(i,j+1,grid,dp);
        }else if(i!=m-1 && j==n-1){
            return dp[i][j]=grid[i][j]+solve(i+1,j,grid,dp);
        }
        return dp[i][j]=grid[i][j]+min(solve(i+1,j,grid,dp),solve(i,j+1,grid,dp));
    }
    int minPathSum(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
         vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int res=solve(0,0,grid,dp);
        return res;
    }

//Iterative...

int Solution::minPathSum(vector<vector<int> > &A) {
    if(A.size()==0)return 0;
    int m=A.size(),n=A[0].size();
    int dp[m][n];
    dp[0][0]=A[0][0];
    for(int i=1;i<m;i++){
        dp[i][0]=dp[i-1][0]+A[i][0];
    }
    for(int j=1;j<n;j++){
        dp[0][j]=dp[0][j-1]+A[0][j];
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=A[i][j]+min(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[m-1][n-1];
}
