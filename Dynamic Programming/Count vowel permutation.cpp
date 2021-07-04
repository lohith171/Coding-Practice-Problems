//https://leetcode.com/problems/count-vowels-permutation/

int countVowelPermutation(int n) {
        int dp[n][5];
        dp[0][0]=1;
        dp[0][1]=1;
        dp[0][2]=1;
        dp[0][3]=1;
        dp[0][4]=1;
        long long mod=pow(10,9)+7;
        for(int i=1;i<n;i++){
            dp[i][0]=((dp[i-1][1]%mod)+(dp[i-1][2]%mod)+(dp[i-1][4]%mod))%mod;
            dp[i][1]=((dp[i-1][0]%mod)+(dp[i-1][2]%mod))%mod;
            dp[i][2]=((dp[i-1][1]%mod)+(dp[i-1][3]%mod))%mod;
            dp[i][3]=((dp[i-1][2]%mod))%mod;
            dp[i][4]=((dp[i-1][2]%mod)+(dp[i-1][3]%mod))%mod;
        }
        return ((dp[n-1][0]%mod)+(dp[n-1][1]%mod)+(dp[n-1][2]%mod)+(dp[n-1][3]%mod)+(dp[n-1][4]%mod))%mod;
    }
