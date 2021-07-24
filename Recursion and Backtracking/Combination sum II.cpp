//https://www.interviewbit.com/problems/combination-sum-ii/

/*Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

Each number in C may only be used once in the combination.

Note:

All numbers (including target) will be positive integers.
Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
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
            solve(i+1,sum-A[i],A,v,res);
            v.pop_back();
        }
    }
}


vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int>>res;
    sort(A.begin(),A.end());
    vector<int>v;
    solve(0,B,A,v,res);
    return res;

}
