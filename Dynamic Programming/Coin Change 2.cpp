//https://leetcode.com/problems/coin-change/submissions/ 

int mincoins(vector<int>& coins,int n,int sum,vector<vector<int>>& dp){
        if(sum==0)return 0;
        if(n==0 && sum!=0)return INT_MAX-1;
        if(dp[n][sum]!=-1)return dp[n][sum];
        if(coins[n-1]<=sum){
            return dp[n][sum]=min(1+mincoins(coins,n,sum-coins[n-1],dp),mincoins(coins,n-1,sum,dp));
        }else{
            return dp[n][sum]=mincoins(coins,n-1,sum,dp);
        }
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        int res=mincoins(coins,coins.size(),amount,dp);
        if(res==INT_MAX-1)return -1;
        return res;
    }
