//https://www.interviewbit.com/problems/balanced-parantheses/

int Solution::solve(string A) {
    int n=A.size();
    if(n==0)return 1;
    if(n==1)return 0;
    stack<int>st;
    for(int i=0;i<n;i++){
        if(A[i]=='(')st.push(i);
        else{
            if(st.empty())return false;
            else st.pop();
        }
    }
    if(!st.empty())return false;
    return true;
}
