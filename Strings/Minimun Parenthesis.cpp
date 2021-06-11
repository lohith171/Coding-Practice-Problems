//https://www.interviewbit.com/problems/minimum-parantheses/

int Solution::solve(string A) {
    stack<int>st;
    int res=0;
    for(int i=0;i<A.size();i++){
        if(A[i]=='(')st.push(i);
        else{
            if(st.empty()){
                res++;
            }else st.pop();
        }
    }
    while(!st.empty()){
        res++;
        st.pop();
    }
    return res;
}
