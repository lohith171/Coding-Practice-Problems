 //https://practice.geeksforgeeks.org/problems/coin-change2448/1

long long int solve(int s[],int a,int sum,vector<vector<long long int>>& dp){
      if(a==0 && sum!=0)return 0;
      if(sum==0)return 1;
      if(dp[a][sum]!=-1)return dp[a][sum];
      if(s[a-1]<=sum){
          return dp[a][sum]=solve(s,a,sum-s[a-1],dp)+solve(s,a-1,sum,dp);
      }else{
          return dp[a][sum]=solve(s,a-1,sum,dp);
      }
  }
    long long int count( int S[], int m, int n )
    {
       
        //code here.
        vector<vector<long long int>>dp(m+1,vector<long long int>(n+1,-1));
        return solve(S,m,n,dp);
    }
