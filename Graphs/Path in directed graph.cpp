//https://www.interviewbit.com/old/problems/path-in-directed-graph/

void dfs(int val,vector<vector<int>>& adj,vector<bool>& visi){
    visi[val]=1;
    for(auto x:adj[val]){
        if(!visi[x]){
            dfs(x,adj,visi);
        }
    }
}


int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>>adj(A+1);
    vector<bool>visi(A+1,0);
    for(int i=0;i<B.size();i++){
        adj[B[i][0]].push_back(B[i][1]);
    }
    dfs(1,adj,visi);
    if(visi[A]==1)return 1;
    return 0;
}
