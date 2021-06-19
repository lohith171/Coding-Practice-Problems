//https://www.interviewbit.com/old/problems/best-time-to-buy-and-sell-stocks-ii/

int Solution::maxProfit(const vector<int> &A) {
    int start=0,res=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>A[start]){
            res+=A[i]-A[start];
            start=i;
        }else if(A[i]<A[start]){
            start=i;
        }
    }
    return res;
}
