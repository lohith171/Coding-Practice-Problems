//https://www.interviewbit.com/problems/combination-sum/

/*Given a set of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

The same repeated number may be chosen from C unlimited number of times.

Note:

All numbers (including target) will be positive integers.
Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
The combinations themselves must be sorted in ascending order.
CombinationA > CombinationB iff (a1 > b1) OR (a1 = b1 AND a2 > b2) OR … (a1 = b1 AND a2 = b2 AND … ai = bi AND ai+1 > bi+1)
The solution set must not contain duplicate combinations.*/

void solve(int ind,int sum,vector<int>& A,vector<int>v,vector<vector<int>>& res){
    if(sum==0){
        res.push_back(v);
        return;
    }
    for(int i=ind;i<A.size();i++){
        if(i!=ind && A[i-1]==A[i])continue;
        if(A[i]<=sum){
            v.push_back(A[i]);
            solve(i,sum-A[i],A,v,res);
            v.pop_back();
        }
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>>res;
    vector<int>v;
    sort(A.begin(),A.end());
    solve(0,B,A,v,res);
    return res;
}
