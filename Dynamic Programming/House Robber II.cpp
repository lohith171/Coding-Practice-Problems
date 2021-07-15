 //https://leetcode.com/problems/house-robber-ii/

int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int dp[n+1][4];
        dp[2][0]=0;
        dp[2][1]=nums[0];
        dp[2][2]=nums[1];
        dp[2][3]=0;
        
        for(int i=3;i<=n;i++){
            dp[i][0]=max(dp[i-1][0],dp[i-1][2]);
            dp[i][1]=max(dp[i-1][1],dp[i-1][3]);
            dp[i][2]=dp[i-1][0]+nums[i-1];
            if(i!=n){
                dp[i][3]=dp[i-1][1]+nums[i-1];
            }else{
                dp[i][3]=0;
            }
            
        }
        
        return max(dp[n][0],max(dp[n][1],dp[n][2]));
    }
