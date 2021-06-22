//https://www.interviewbit.com/old/problems/nearest-smaller-element/

vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int>st;
    int n=A.size();
    st.push(n-1);
    vector<int>res(n);
    for(int i=n-2;i>=0;i--){
        while( !st.empty() && A[st.top()]>A[i]){
            res[st.top()]=A[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        res[st.top()]=-1;
        st.pop();
    }
    return res;
}
