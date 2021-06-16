//https://www.interviewbit.com/problems/longest-valid-parentheses/

int Solution::longestValidParentheses(string A) {
    int n=A.size();
    vector<bool>v(n,1);
    stack<int>st;
    for(int i=0;i<n;i++){
        if(A[i]=='(')st.push(i);
        else{
            if(!st.empty())st.pop();
            else v[i]=false;
        }
    }
    while(!st.empty()){
        v[st.top()]=false;
        st.pop();
    }
    int temp=-1;
    int res=0;
    for(int i=0;i<n;i++){
        if(v[i]==false){
            res=max(res,i-temp-1);
            temp=i;
        }
    }
    res=max(res,n-temp-1);
    return res;
}
