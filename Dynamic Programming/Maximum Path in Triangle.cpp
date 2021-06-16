//https://www.interviewbit.com/problems/maximum-path-in-triangle/

int Solution::solve(vector<vector<int> > &A) {
    if(A.size()==0)return 0;
    int m=A.size(),n=A[0].size();
    int dp[m][n];
    dp[0][0]=A[0][0];
    for(int i=1;i<m;i++){
        dp[i][0]=A[i][0]+dp[i-1][0];
    }
    int i=1,j=1;
    while(i<m && j<n){
        dp[i][j]=A[i][j]+dp[i-1][j-1];
        i++;
        j++;
    }
    for(i=2;i<m;i++){
        for(j=1;j<i;j++){
            dp[i][j]=A[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
        }
    }
    int mx=INT_MIN;
    for(j=0;j<n;j++){
        mx=max(mx,dp[m-1][j]);
    }
    return mx;
}
