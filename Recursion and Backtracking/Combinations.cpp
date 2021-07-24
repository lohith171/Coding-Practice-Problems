//https://www.interviewbit.com/problems/combinations/

/*Given two integers n and k, return all possible combinations of k numbers out of 1 2 3 ... n.

Make sure the combinations are sorted.

To elaborate,

Within every entry, elements should be sorted. [1, 4] is a valid entry while [4, 1] is not.
Entries should be sorted within themselves.
*/

void solve(int ind,int k,int n,vector<int>v,vector<vector<int>>& res){
    if(k==0){
        res.push_back(v);
        return;
    }
    for(int i=ind;i<=n;i++){
        v.push_back(i);
        solve(i+1,k-1,n,v,res);
        v.pop_back();
    }
}

vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int>>res;
    vector<int>v;
    solve(1,B,A,v,res);
    return res;
}
