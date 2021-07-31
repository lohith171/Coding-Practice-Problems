//https://leetcode.com/problems/beautiful-arrangement/
/*
Suppose you have n integers labeled 1 through n. A permutation of those n integers perm (1-indexed) is considered a beautiful arrangement if for every i (1 <= i <= n), either of the following is true:

perm[i] is divisible by i.
i is divisible by perm[i].
Given an integer n, return the number of the beautiful arrangements that you can construct.
*/

class Solution {
public:
    int res=0;
    void solve(int ind,int mask,vector<int>& nums){
        if(ind==nums.size()+1){
            res++;
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(mask & 1<<i){
                if((ind)%nums[i]==0 || nums[i]%(ind)==0){
                    solve(ind+1,mask^(1<<i),nums);
                }
            }
        }
    }
    int countArrangement(int n) {
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            nums[i]=i+1;
        }
        solve(1,(1<<n)-1,nums);
        return res;
        
    }
};
