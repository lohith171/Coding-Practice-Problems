class Solution {
public:
    bool istrue(int val,int c,vector<bool>& visi,vector<vector<int>>& graph,vector<int>& v){
        visi[val]=true;
        v[val]=c;
        for(auto x:graph[val]){
            if(!visi[x]){
                if(istrue(x,c^1,visi,graph,v)==false)return false;
            }else{
                if(v[x]==v[val])return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool>visi(n,0);
        vector<int>v(n);
        for(int i=0;i<n;i++){
            if(!visi[i]){
                if(istrue(i,0,visi,graph,v)==false)return false;
            }
        }
        return true;
    }
};
