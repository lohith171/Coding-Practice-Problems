//https://www.interviewbit.com/old/problems/smaller-or-equal-elements/

int Solution::solve(vector<int> &A, int B) {
    int l=0,h=A.size()-1,m,ind=-1;
    while(l<=h){
        m=(l+h)/2;
        if(A[m]==B && (m==A.size()-1 || A[m+1]!=B))return m+1;
        if(A[m]<=B){
            ind=m;
            l=m+1;
        }else h=m-1;
    }
    return ind+1;
}
