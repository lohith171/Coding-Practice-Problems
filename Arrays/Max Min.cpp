int Solution::solve(vector<int> &A) {
    int max= *max_element(A.begin(),A.end());
    int min= *min_element(A.begin(),A.end());
    return max+min;
}
