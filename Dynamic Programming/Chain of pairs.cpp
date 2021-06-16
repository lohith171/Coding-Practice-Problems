//https://www.interviewbit.com/problems/chain-of-pairs/

int Solution::solve(vector<vector<int> > &A) {
    if(A.size()==0)return 0;
    int n=A.size();
    vector<int>dp(n,1);
    dp[0]=1;
    int res=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[j][1]<A[i][0]){
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
         res=max(res,dp[i]);
    }
    return res;
}
