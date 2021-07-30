//https://leetcode.com/problems/minimum-xor-sum-of-two-arrays/
/*
You are given two integer arrays nums1 and nums2 of length n.

The XOR sum of the two integer arrays is (nums1[0] XOR nums2[0]) + (nums1[1] XOR nums2[1]) + ... + (nums1[n - 1] XOR nums2[n - 1]) (0-indexed).

For example, the XOR sum of [1,2,3] and [3,2,1] is equal to (1 XOR 3) + (2 XOR 2) + (3 XOR 1) = 2 + 0 + 2 = 4.
Rearrange the elements of nums2 such that the resulting XOR sum is minimized.

Return the XOR sum after the rearrangement.
*/

class Solution {
public:
    int solve(int ind,int mask,vector<int>& nums1, vector<int>& nums2,vector<vector<int>>& dp){
        if(ind==nums1.size())return 0;
        if(dp[ind][mask]!=-1)return dp[ind][mask];
        int ans=INT_MAX;
        for(int j=0;j<nums2.size();j++){
            if(mask & 1<<j){
                ans=min(ans,(nums1[ind]^nums2[j])+solve(ind+1,mask^(1<<j),nums1,nums2,dp));
            }
        }
        return dp[ind][mask]=ans;
    }
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
       int n=nums1.size();
       vector<vector<int>>dp(n,vector<int>((1<<n),-1));
        return solve(0,(1<<n)-1,nums1,nums2,dp);
    }
};
