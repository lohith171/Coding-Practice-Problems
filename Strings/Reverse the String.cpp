//https://www.interviewbit.com/problems/reverse-the-string/

string Solution::solve(string A) {
    int n=A.length();
    if(n==0)return "";
    string temp;
    stack<string>st;
    for(int i=0;i<n;i++){
        if(A[i]==' '){
            if(!temp.empty()){
            st.push(temp);
            temp.clear();
            }
        }else{
           temp.push_back(A[i]); 
        }
    }
    if(!temp.empty()){
        st.push(temp);
    }
    string res;
    while(!st.empty()){
        res+=st.top();
        st.pop();
        if(!st.empty()){
            res+=" ";
        }
    }
    return res;
}
