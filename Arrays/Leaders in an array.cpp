//https://www.interviewbit.com/problems/leaders-in-an-array/

vector<int> Solution::solve(vector<int> &A) {
    vector<int>res;
    int m=INT_MIN;
    for(int i=A.size()-1;i>=0;i--){
        if(A[i]>m){
            m=A[i];
            res.push_back(A[i]);
        }
    }
    return res;
}
