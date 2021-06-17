//https://www.interviewbit.com/problems/length-of-longest-subsequence/

int Solution::longestSubsequenceLength(const vector<int> &A) {
    if(A.size()==0)return 0;
    int n=A.size();
    vector<int>dp1(n,1),dp2(n,1);
    dp1[0]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[j]<A[i]){
                dp1[i]=max(dp1[i],1+dp1[j]);
            }
        }
    }
    dp2[n-1]=1;
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(A[j]<A[i]){
                dp2[i]=max(dp2[i],1+dp2[j]);
            }
        }
    }
    int res=0;
    for(int i=0;i<=n-1;i++){
        res=max(res,dp1[i]+dp2[i]);
    }
    return res-1;
}
