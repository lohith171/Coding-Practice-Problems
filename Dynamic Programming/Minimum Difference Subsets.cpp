//https://www.interviewbit.com/problems/minimum-difference-subsets/

bool issum(vector<int>& A,int n,int s,vector<vector<int>>& dp){
    if(n==0 && s!=0)return 0;
    if(s==0)return 1;
    if(dp[n][s]!=-1)return dp[n][s];
    if(A[n-1]<=s){
        return dp[n][s]=issum(A,n-1,s-A[n-1],dp) || issum(A,n-1,s,dp);
    }else{
      return  dp[n][s]=issum(A,n-1,s,dp);
    }
}

int Solution::solve(vector<int> &A) {
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
    }
   vector<vector<int>>dp(A.size()+1,vector<int>(sum/2+1,-1));
    int m=INT_MIN;
    for(int i=0;i<=sum/2;i++){
       if(issum(A,A.size(),i,dp)){
           m=max(m,i);
       }
    }
    return sum-2*m;
}


