 //https://leetcode.com/problems/house-robber/

int rob(vector<int>& nums) {
        int n=nums.size();
        int dp[n+1][2];
        dp[0][0]=0;
        dp[0][1]=0;
        for(int i=1;i<=n;i++){
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
            dp[i][1]=dp[i-1][0]+nums[i-1];
        }
        return max(dp[n][0],dp[n][1]);
    }
