//https://www.interviewbit.com/problems/min-sum-path-in-triangle/

int Solution::minimumTotal(vector<vector<int> > &A) {

    if(A.size()==0)return 0;
    int m=A.size();
    vector<vector<int>>dp=A;
    for(int i=1;i<m;i++){
        dp[i][0]=A[i][0]+dp[i-1][0];
    }
    for(int i=1;i<m;i++){
        dp[i][i]=A[i][i]+dp[i-1][i-1];
    }
    for(int i=2;i<m;i++){
        for(int j=1;j<i;j++){
            dp[i][j]=A[i][j]+min(dp[i-1][j],dp[i-1][j-1]);
        }
    }
    int mi=INT_MAX;
    for(int j=0;j<m;j++){
        mi=min(mi,dp[m-1][j]);
    }
    return mi;
}
