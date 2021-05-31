int Solution::solve(vector<int> &A, int B) {
    int m=INT_MIN;
    int sum=0,i,j;
    for(i=0;i<B;i++){
        sum+=A[i];
    }
    m=max(m,sum);
    i=B-1;
    j=A.size()-1;
    while(B+2){
        sum=sum-A[i]+A[j];
        i--;
        j--;
        m=max(m,sum);
        B--;
    }
    return m;
}
