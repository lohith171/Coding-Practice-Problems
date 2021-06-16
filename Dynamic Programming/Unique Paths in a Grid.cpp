//https://www.interviewbit.com/problems/unique-paths-in-a-grid/

int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    if(A.size()==0)return 0;
    int m=A.size(),n=A[0].size();
    if(A[0][0]==1)return 0;
    int dp[m][n];
    dp[0][0]=1;
    for(int i=1;i<m;i++){
        if(A[i][0]==0){
            dp[i][0]=dp[i-1][0];
        }else dp[i][0]=0;
    }
    for(int j=1;j<n;j++){
        if(A[0][j]==0){
            dp[0][j]=dp[0][j-1];
        }else dp[0][j]=0;
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(A[i][j]==0){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }else dp[i][j]=0;
        }
    }
    return dp[m-1][n-1];
}
