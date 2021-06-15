//https://www.interviewbit.com/problems/stairs/

int Solution::climbStairs(int A) {
    if(A==0)return 0;
    if(A==1)return 1;
    int dp[A+1];
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=A;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[A];
}
