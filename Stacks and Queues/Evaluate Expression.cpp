//https://www.interviewbit.com/old/problems/evaluate-expression/

int Solution::evalRPN(vector<string> &A) {
    stack<int>st;
    for(int i=0;i<A.size();i++){
        if(A[i]=="+" || A[i]=="-" || A[i]=="*" || A[i]=="/"){
            int j=st.top();
            st.pop();
            int k=st.top();
            st.pop();
            if(A[i]=="+")k+=j;
            else if(A[i]=="-")k-=j;
            else if(A[i]=="*")k*=j;
            else k/=j;
            st.push(k);
        }else st.push(stoi(A[i]));
    }
    return st.top();
}
