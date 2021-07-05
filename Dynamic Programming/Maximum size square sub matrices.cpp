//https://www.interviewbit.com/old/problems/maximum-size-square-sub-matrix/

int Solution::solve(vector<vector<int> > &A) {
    int m=A.size(),n=A[0].size(),ma=1;
    vector<vector<int>>dp(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        if(A[i][0]==1){
            dp[i][0]=1;
            ma=1;
        }
    }
    for(int j=1;j<n;j++){
        if(A[0][j]==1){
            dp[0][j]=1;
            ma=1;
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(A[i][j]==1){
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                ma=max(ma,dp[i][j]*dp[i][j]);
            }
        }
    }
    return ma;
}
