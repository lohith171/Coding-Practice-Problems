//https://leetcode.com/problems/permutations-ii/

/*
Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
*/

class Solution {
public:
    vector<vector<int>>res;
    void solve(int mask,vector<int>& nums,vector<int>& v){
        if(v.size()==nums.size()){
            res.push_back(v);
            return;
        }
        int temp=-11;
        for(int i=0;i<nums.size();i++){
            if(mask & 1<<i && temp!=nums[i]){
                temp=nums[i];
                v.push_back(nums[i]);
                solve(mask^(1<<i),nums,v);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>v;
        solve((1<<n)-1,nums,v);
        return res;
    }
};
