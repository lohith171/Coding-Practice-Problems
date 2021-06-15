//https://leetcode.com/problems/minimum-path-sum/

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
