//https://www.interviewbit.com/old/problems/balance-array/

int Solution::solve(vector<int> &A) {
    int res=0,todd=0,teven=0,od=0,ev=0;
    for(int i=0;i<A.size();i++){
        if(i%2==0)teven+=A[i];
        else todd+=A[i];
    }
    for(int i=0;i<A.size();i++){
        if(i%2==0)teven-=A[i];
        else todd-=A[i];
        if(teven+od==todd+ev)res++;
        if(i%2==0)ev+=A[i];
        else od+=A[i];
        
    }
    return res;
}
