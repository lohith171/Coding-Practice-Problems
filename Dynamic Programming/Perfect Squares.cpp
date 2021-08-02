//https://leetcode.com/problems/perfect-squares/
/*
Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.
*/

class Solution {
public:
    int solve(vector<int>& nums,int n,int sum,vector<vector<int>>& dp){
        if (sum == 0) { 
            return dp[n][sum] = 0;
        } 
        
        else if (n == 1) { 
            return dp[n][sum] = sum;
        } 
         
        else if (dp[n][sum] != -1) { 
            return dp[n][sum];
        }
        else if (nums[n-1] > sum) { 
            return dp[n][sum] = solve(nums, n-1, sum,dp);
        } 
        
        return dp[n][sum] = min(1 + solve(nums, n, sum-nums[n-1],dp), solve(nums, n-1, sum,dp));
    }
    int numSquares(int n) {
        vector<int>nums;
        for(int i=1;i<=sqrt(n);i++){
            nums.push_back(i*i);
        }
        int k=nums.size();
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
        
        return solve(nums,k,n,dp);
    }
};
