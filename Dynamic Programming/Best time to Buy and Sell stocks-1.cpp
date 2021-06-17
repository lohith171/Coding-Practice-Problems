//https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-i/

int Solution::maxProfit(const vector<int> &A) {
    if(A.size()<2)return 0;
    int min=A[0];
    int res=0;
    for(int i=1;i<A.size();i++){
        if(A[i]>=min){
            res=max(res,A[i]-min);
        }else{
            min=A[i];
        }
    }
    return res;
}
