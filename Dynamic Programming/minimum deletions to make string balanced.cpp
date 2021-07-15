 //https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/

int minimumDeletions(string s) {
        int n=s.size();
        int dp[n+1][2];
        dp[0][0]=0;
        dp[0][1]=0;
        for(int i=1;i<=n;i++){
            if(s[i-1]=='a'){
                dp[i][0]=dp[i-1][0];
                dp[i][1]=min(dp[i-1][0],dp[i-1][1])+1;
            }
            if(s[i-1]=='b'){
                dp[i][0]=1+dp[i-1][0];
                dp[i][1]=min(dp[i-1][0],dp[i-1][1]);
            }
        }
        return min(dp[n][0],dp[n][1]);
    }
