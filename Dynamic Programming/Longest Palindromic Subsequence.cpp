//https://www.interviewbit.com/problems/longest-palindromic-subsequence/

int LPS(string& A,int m,string& B,int n,vector<vector<int>>& dp){
    if(m==0 || n==0)return 0;
    if(dp[m][n]!=-1)return dp[m][n];
    if(A[m-1]==B[n-1]){
     dp[m][n]=1+LPS(A,m-1,B,n-1,dp);
    }else{
    dp[m][n]=max(LPS(A,m-1,B,n,dp),LPS(A,m,B,n-1,dp));
    }
    return dp[m][n];
}


int Solution::solve(string A) {
    string B=A;
    reverse(B.begin(),B.end());
    vector<vector<int>>dp(A.size()+1,vector<int>(B.size()+1,-1));
    return LPS(A,A.size(),B,B.size(),dp);
}
