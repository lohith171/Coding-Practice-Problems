//https://www.interviewbit.com/old/problems/cycle-in-directed-graph/

bool issolve(int val,vector<vector<int>>& adj,vector<bool>& visi,vector<bool>& stk){
    visi[val]=1;
    stk[val]=1;
    for(auto x:adj[val]){
        if(stk[x])return 1;
        if(!visi[x]){
            if(issolve(x,adj,visi,stk))return 1;
        }
    }
    stk[val]=0;
    return 0;
}



int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>>adj(A+1);
    for(int i=0;i<B.size();i++){
        adj[B[i][0]].push_back(B[i][1]);
    }
    vector<bool>visi(A+1,0);
    vector<bool>stk(A+1,0);
    for(int i=1;i<=A;i++){
        if(issolve(i,adj,visi,stk))return 1;
    }
    return 0;
}
