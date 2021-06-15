//https://www.interviewbit.com/problems/minimum-difference-subsets/

int Solution::solve(vector<int> &A) {
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
    }
    bool dp[A.size()+1][sum/2+1];
    for(int i=0;i<=A.size();i++){
        dp[i][0]=true;
    }
    for(int j=1;j<=sum/2;j++){
        dp[0][j]=false;
    }
    for(int i=1;i<=A.size();i++){
        for(int j=1;j<=sum/2;j++){
            if(A[i-1]<=j){
                dp[i][j]=dp[i-1][j-A[i-1]] || dp[i-1][j];
            }else {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    int m=INT_MIN;
    for(int i=0;i<=sum/2;i++){
       if(dp[A.size()][i]==true){
           m=max(m,i);
       }
    }
    
    return sum-2*m;
    
    
}

