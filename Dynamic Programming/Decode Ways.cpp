//https://leetcode.com/problems/decode-ways/

class Solution {
public:
    bool flag=0;
    int solve(int n,string& s,vector<int>& dp){
        if(n==0)return 1;
        if(n==1 && s[n-1]=='0')return 0;
        if(n==1)return 1;
        if(dp[n]!=-1)return dp[n];
        if(s[n-1]=='0' && s[n-2]=='0'){
            flag=1;
            return 0;
        }else if(s[n-1]=='0'){
            if(s[n-2]>='3'){
                flag=1;
                return 0;
            }else
            dp[n]=solve(n-2,s,dp);
        }else if(s[n-2]=='0'){
            dp[n]=solve(n-1,s,dp);
        }else{
            if(s[n-1]<='6' && s[n-2]<='2' || s[n-1]>'6' && s[n-2]=='1'){
                dp[n]=solve(n-1,s,dp)+solve(n-2,s,dp);
            }else{
                dp[n]=solve(n-1,s,dp);
            }
        }
        return dp[n];
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        if(flag)return 0;
        return solve(n,s,dp);
    }
};
