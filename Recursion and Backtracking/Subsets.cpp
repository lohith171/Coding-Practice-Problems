//https://leetcode.com/problems/subsets/

class Solution {
public:
    void solve(int ind,vector<int>v,vector<int>& nums,vector<vector<int>>& res){
        if(ind==nums.size()){
            res.push_back(v);
            return;
        }
        solve(ind+1,v,nums,res);
        v.push_back(nums[ind]);
        solve(ind+1,v,nums,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>v;
        solve(0,v,nums,res);
        return res;
    }
};
