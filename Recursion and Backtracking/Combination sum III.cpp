//https://leetcode.com/problems/combination-sum-iii/

class Solution {
public:
    void solve(int ind,int k,int sum,vector<int>v,vector<int>& nums,vector<vector<int>>& res){
        if(k==0){
            if(sum==0){
                res.push_back(v);
            }
            return;
        }
        if(ind==nums.size())return;
        if(nums[ind]<=sum){
            v.push_back(nums[ind]);
            solve(ind+1,k-1,sum-nums[ind],v,nums,res);
            v.pop_back();
        }
        solve(ind+1,k,sum,v,nums,res);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        vector<int>v;
        vector<vector<int>>res;
        solve(0,k,n,v,nums,res);
        return res;
    }
};
