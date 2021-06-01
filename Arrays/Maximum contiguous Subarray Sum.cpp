//https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

int Solution::maxSubArray(const vector<int> &A) {
    int best=INT_MIN,sum=0;
    for(int i=0;i<A.size();i++){
        sum=max(A[i],sum+A[i]);
        best=max(best,sum);
    }
    return best;
}
