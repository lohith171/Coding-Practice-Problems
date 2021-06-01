//https://www.interviewbit.com/problems/noble-integer/

int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n=A.size();
    unordered_map<int,int>m;
    for(int i=0;i<A.size();i++){
        m[A[i]]=i+1;
    }
    for(int i=0;i<n;i++){
        if(n-m[A[i]]==A[i])return 1;
    }
    return -1;
}
