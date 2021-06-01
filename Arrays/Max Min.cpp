//https://www.interviewbit.com/problems/max-min-05542f2f-69aa-4253-9cc7-84eb7bf739c4/

int Solution::solve(vector<int> &A) {
    int max= *max_element(A.begin(),A.end());
    int min= *min_element(A.begin(),A.end());
    return max+min;
}
