//https://www.interviewbit.com/problems/0-1-knapsack/

int knapsack(vector<int>& A,vector<int>& B,int n,int wt,vector<vector<int>>& dp){
    if(n==0 || wt==0)return 0;
    if(dp[n][wt]!=-1)return dp[n][wt];
    if(B[n-1]<=wt){
        dp[n][wt]=max(A[n-1]+knapsack(A,B,n-1,wt-B[n-1],dp),knapsack(A,B,n-1,wt,dp));
    }else {
        dp[n][wt]=knapsack(A,B,n-1,wt,dp);
    }
    return dp[n][wt];
}

int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    vector<vector<int>>dp(A.size()+1,vector<int>(C+1,-1));
    return knapsack(A,B,A.size(),C,dp);
}
