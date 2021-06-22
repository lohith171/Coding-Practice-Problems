//https://www.interviewbit.com/old/problems/redundant-braces/

int Solution::braces(string A) {
    stack<char>st;
    for(int i=0;i<A.size();i++){
        if(A[i]==')'){
            if(st.top()=='(')return 1;
            else{
                string temp;
                while(st.top()!='('){
                    temp.push_back(st.top());
                    st.pop();
                }
                st.pop();
                if(temp.size()==1 && temp!="+" && temp!="-" && temp!="*" && temp!="/"){
                    return 1;
                }
            }
        }else st.push(A[i]);
    }
    return 0;
}
