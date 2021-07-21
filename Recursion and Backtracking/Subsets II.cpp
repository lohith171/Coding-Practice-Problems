//https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    void solve(int ind,vector<int>v,vector<int>& nums,set<vector<int>>& s){
        if(ind==nums.size()){
            s.insert(v);
            return;
        }
        solve(ind+1,v,nums,s);
        v.push_back(nums[ind]);
        solve(ind+1,v,nums,s);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        set<vector<int>>s;
        vector<int>v;
        sort(nums.begin(),nums.end());
        solve(0,v,nums,s);
        for(auto x:s)res.push_back(x);
        return res;
    }
};
