//https://www.interviewbit.com/problems/subsets-ii/

void solve(int ind,vector<int>& A,vector<int>v,vector<vector<int>>& res){
    res.push_back(v);
    for(int i=ind;i<A.size();i++){
        if(i!=ind && A[i-1]==A[i])continue;
        v.push_back(A[i]);
        solve(i+1,A,v,res);
        v.pop_back();
    }
}


vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int>>res;
    vector<int>v;
   solve(0,A,v,res);
   return res;
}
