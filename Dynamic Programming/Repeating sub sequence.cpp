//https://www.interviewbit.com/old/problems/repeating-subsequence/

int Solution::anytwo(string A) {
    int n=A.size();
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    string b=A;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j){
                if(A[i-1]==b[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
            if(dp[i][j]>=2)return 1;
        }
        
    }
    return 0;
}
