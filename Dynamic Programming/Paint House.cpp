//https://www.interviewbit.com/problems/paint-house/

int Solution::solve(vector<vector<int> > &A) {
    if(A.size()==0)return 0;
    int n=A.size();
    int dp[n][3];
    dp[0][0]=A[0][0];
    dp[0][1]=A[0][1];
    dp[0][2]=A[0][2];
    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            if(j==0){
                dp[i][j]=A[i][j]+min(dp[i-1][1],dp[i-1][2]);
            }else if(j==1){
                dp[i][j]=A[i][j]+min(dp[i-1][0],dp[i-1][2]);
            }else{
                 dp[i][j]=A[i][j]+min(dp[i-1][0],dp[i-1][1]);
            }
        }
    }
    int k=min(dp[n-1][0],dp[n-1][1]);
    return min(k,dp[n-1][2]);
}
