//https://leetcode.com/problems/all-paths-from-source-to-target/

class Solution {
public:
    vector<vector<int>>res;
    int n;
    void solve(int val,vector<int>v,vector<vector<int>>& graph){
        v.push_back(val);
        if(val==n-1){
            res.push_back(v);
            return;
        }
        for(auto x:graph[val]){
            solve(x,v,graph);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>v;
        n=graph.size();
        solve(0,v,graph);
        return res;
    }
};
