//https://www.interviewbit.com/old/problems/search-in-bitonic-array/

int Solution::solve(vector<int> &A, int B) {
    int l=0,h=A.size()-1,ind;
    while(l<=h){
        int m=(l+h)/2;
        if(A[m]>A[m+1] && A[m]>A[m-1]){
            ind=m;
            break;
        }
        if(A[m]<A[m+1]){
            l=m+1;
        }else h=m-1;
    }
    l=0,h=ind;
    while(l<=h){
        int m=(l+h)/2;
        if(A[m]==B)return m;
        if(A[m]<B){
            l=m+1;
        }else h=m-1;
    }
    l=ind,h=A.size()-1;
     while(l<=h){
        int m=(l+h)/2;
        if(A[m]==B)return m;
        if(A[m]<B){
            h=m-1;
        }else l=m+1;
    }
    return -1;
}
