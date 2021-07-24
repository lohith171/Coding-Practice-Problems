//https://www.interviewbit.com/old/problems/subset/

void solve(int ind,vector<int>& A,vector<int>v,vector<vector<int>>& res){
        res.push_back(v);
    for(int i=ind;i<A.size();i++){
        v.push_back(A[i]);
        solve(i+1,A,v,res);
        v.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int>>res;
    vector<int>v;
    sort(A.begin(),A.end());
    solve(0,A,v,res);
    return res;
}

