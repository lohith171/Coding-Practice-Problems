//https://leetcode.com/problems/combination-sum/

class Solution {
public:
    void solve(int ind,int sum,vector<int>v,vector<int>& nums,vector<vector<int>>& res){
        if(ind==nums.size())return;
        if(sum==0){
            res.push_back(v);
            return;
        }
        if(nums[ind]<=sum){
            solve(ind+1,sum,v,nums,res);
            v.push_back(nums[ind]);
            solve(ind,sum-nums[ind],v,nums,res);
        }else return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        solve(0,target,v,candidates,res);
        return res;
    }
};
