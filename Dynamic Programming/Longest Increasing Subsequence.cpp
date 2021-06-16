//https://www.interviewbit.com/problems/longest-increasing-subsequence/

int Solution::lis(const vector<int> &A) {
    if(A.size()==0)return 0;
    int n=A.size();
    vector<int>dp(n,1);
    int res=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[j]<A[i]){
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
        res=max(res,dp[i]);
    }
    return res;
}
