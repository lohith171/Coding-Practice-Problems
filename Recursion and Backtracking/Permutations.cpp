//https://www.interviewbit.com/problems/permutations/

//Given a collection of numbers, return all possible permutations.

//using bactracking

void solve(vector<int>& A,vector<int>v,vector<bool>& vis,vector<vector<int>>& res){
    if(v.size()==A.size()){
        res.push_back(v);
        return;
    }
    for(int i=0;i<A.size();i++){
        if(!vis[i]){
            vis[i]=1;
            v.push_back(A[i]);
            solve(A,v,vis,res);
            v.pop_back();
            vis[i]=0;
        }
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
   int n=A.size();
   vector<bool>vis(n,0);
   vector<int>v;
   vector<vector<int>>res;
   solve(A,v,vis,res);
   return res;
}


//Using Bitmasking

void solve(vector<int>& A,vector<int>v,int mask,vector<vector<int>>& res){
    if(v.size()==A.size()){
        res.push_back(v);
        return;
    }
    for(int i=0;i<A.size();i++){
       if(mask & 1<<i){
           v.push_back(A[i]);
           solve(A,v,mask^(1<<i),res);
           v.pop_back();
       }
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
   int n=A.size();
   
   vector<int>v;
   vector<vector<int>>res;
   solve(A,v,(1<<n)-1,res);
   return res;
}
