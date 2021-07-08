//https://www.interviewbit.com/old/problems/cycle-in-undirected-graph/

bool issolve(int val,int parent,vector<int> adj[],vector<bool>& visi){
    visi[val]=1;
    for(auto x:adj[val]){
        if(!visi[x]){
            if(issolve(x,val,adj,visi))return 1;
        }else{
            if(x!=parent)return 1;
        }
    }
    return 0;
}


int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> adj[A+1];
    for(int i=0;i<B.size();i++){
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }
    vector<bool>visi(A+1,0);
    for(int i=1;i<=A;i++){
        if(!visi[i]){
            if(issolve(i,-1,adj,visi))return 1;
        }
    }
    return 0;
}
