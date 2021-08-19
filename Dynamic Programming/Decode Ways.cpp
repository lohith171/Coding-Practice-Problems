//https://leetcode.com/problems/decode-ways/

/*
A message containing letters from A-Z can be encoded into numbers using the following mapping:

'A' -> "1"
'B' -> "2"
...
'Z' -> "26"
To decode an encoded message, all the digits must be grouped then mapped back into letters using the reverse of the mapping above (there may be multiple ways). For example, "11106" can be mapped into:

"AAJF" with the grouping (1 1 10 6)
"KJF" with the grouping (11 10 6)
Note that the grouping (1 11 06) is invalid because "06" cannot be mapped into 'F' since "6" is different from "06".

Given a string s containing only digits, return the number of ways to decode it.

The answer is guaranteed to fit in a 32-bit integer.
*/

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
