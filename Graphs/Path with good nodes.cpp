//https://www.interviewbit.com/old/problems/path-with-good-nodes/

int issolve(int src,int c,vector<int>& A,vector<bool>& visi,vector<vector<int>>& adj){
    visi[src]=true;
    c-=A[src-1];
    if(c<0)return 0;
    if(adj[src].size()==1)return 1;
    int res=0;
    for(auto x:adj[src]){
        if(!visi[x]){
            res+=issolve(x,c,A,visi,adj);
        }
    }
    return res;
}



int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) {
    vector<vector<int>>adj(A.size()+1);
    for(int i=0;i<B.size();i++){
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
        
    }
    vector<bool>visi(A.size()+1,0);
    return issolve(1,C,A,visi,adj);
}
