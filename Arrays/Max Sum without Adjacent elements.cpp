//https://www.interviewbit.com/old/problems/max-sum-without-adjacent-elements/


int Solution::adjacent(vector<vector<int> > &A) {
    if(A.size()==0)return 0;
    int n=A[0].size();
    if(n==1)return max(A[0][0],A[1][0]);
    int dp[2][n];
    vector<int>v;
    dp[0][0]=A[0][0];
    dp[1][0]=A[1][0];
    v.push_back(max(dp[0][0],dp[1][0]));
    dp[0][1]=A[0][1];
    dp[1][1]=A[1][1];
    v.push_back(max(v[0],max(dp[0][1],dp[1][1])));
    for(int j=2;j<n;j++){
        dp[0][j]=A[0][j]+v[j-2];
        dp[1][j]=A[1][j]+v[j-2];
        v.push_back(max(v[j-1],max(dp[0][j],dp[1][j])));
    }
    int m=0;
    m=max(m,max(dp[0][n-1],max(dp[1][n-1],max(dp[0][n-2],dp[1][n-2]))));
    return m;
    
}
