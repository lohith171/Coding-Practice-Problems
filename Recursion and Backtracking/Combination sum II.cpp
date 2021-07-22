//https://leetcode.com/problems/combination-sum-ii/solution/

class Solution {
public:
    void solve(int ind,int sum,vector<int>v,vector<int>& nums,vector<vector<int>>& res){
            if(sum==0)
                res.push_back(v);
       for(int i=ind;i<nums.size();i++){
           if(i!=ind && nums[i-1]==nums[i])continue;
           if(nums[i]<=sum){
               v.push_back(nums[i]);
               solve(i+1,sum-nums[i],v,nums,res);
               v.pop_back();
           }
       }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        solve(0,target,v,candidates,res);
        return res;
    }
};
