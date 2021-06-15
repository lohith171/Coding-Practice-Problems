//https://www.interviewbit.com/problems/longest-common-subsequence/

int LCS(string a,int m,string b,int n,vector<vector<int>>& dp){
    if(n==0 || m==0)return 0;
    if(dp[m][n]!=-1)return dp[m][n];
    if(a[m-1]==b[n-1]){
       return dp[m][n]=1+LCS(a,m-1,b,n-1,dp);
    }else{
       return dp[m][n]=max(LCS(a,m-1,b,n,dp),LCS(a,m,b,n-1,dp));
    }
}


int Solution::solve(string A, string B) {
    vector<vector<int>>dp(A.size()+1,vector<int>(B.size()+1,-1));
    return LCS(A,A.size(),B,B.size(),dp);
}
