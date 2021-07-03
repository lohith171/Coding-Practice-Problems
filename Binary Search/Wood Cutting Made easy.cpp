//https://www.interviewbit.com/old/problems/woodcutting-made-easy/

int Solution::solve(vector<int> &A, int B) {
    int l=0,m,res=-1,h=*max_element(A.begin(),A.end());
    while(l<=h){
        m=(l+h)/2;
        long long sum=0;
        for(int i=0;i<A.size();i++){
            if(A[i]>m){
                sum+=A[i]-m;
            }
        }
        if(sum>=B){
            res=m;
           l=m+1;
        }else{
            h=m-1;
        }
    }
    return res;
}
