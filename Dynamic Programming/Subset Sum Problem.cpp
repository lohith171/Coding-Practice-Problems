//https://www.interviewbit.com/problems/subset-sum-problem/

bool issubsetsum(vector<int>& A,int n,int s,vector<vector<int>>& dp){
    if(n==0 && s!=0)return 0;
    if(s==0)return 1;
    if(dp[n][s]!=-1)return dp[n][s];
    if(A[n-1]<=s){
        return dp[n][s]=issubsetsum(A,n-1,s-A[n-1],dp) || issubsetsum(A,n-1,s,dp);
    }else{
        return dp[n][s]=issubsetsum(A,n-1,s,dp);
    }
}


int Solution::solve(vector<int> &A, int B) {
    vector<vector<int>>dp(A.size()+1,vector<int>(B+1,-1));
    if(issubsetsum(A,A.size(),B,dp))return 1;
    return 0;
}
