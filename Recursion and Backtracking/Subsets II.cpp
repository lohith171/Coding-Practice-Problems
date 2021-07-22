//https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    void solve(int ind,vector<int>v,vector<int>& nums,vector<vector<int>>& res){
        res.push_back(v);
        
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i-1]==nums[i])continue;
            v.push_back(nums[i]);
            solve(i+1,v,nums,res);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>v;
        sort(nums.begin(),nums.end());
        solve(0,v,nums,res);
        return res;
    }
};
