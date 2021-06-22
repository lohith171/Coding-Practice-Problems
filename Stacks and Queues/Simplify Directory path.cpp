//https://www.interviewbit.com/old/problems/simplify-directory-path/

string Solution::simplifyPath(string A) {
    deque<string>st;
        string temp;
        for(int i=0;i<A.size();i++){
            if(A[i]=='/'){
                if(temp==".."){
                    if(!st.empty()){
                        st.pop_back();
                    }
                    temp.clear();
                }else if(temp=="."){
                    temp.clear();
                }
                else {
                    if(!temp.empty()){
                    st.push_back(temp);
                    temp.clear();
                    }
                }
            }else{
                temp.push_back(A[i]);
            }
            
        }
       if(temp==".."){
                    if(!st.empty()){
                        st.pop_back();
                    }
                    temp.clear();
                }else if(temp=="."){
                    temp.clear();
                }
                else {
                    if(!temp.empty()){
                    st.push_back(temp);
                    temp.clear();
                    }
                }
        temp="/";
        while(!st.empty()){
            temp+=st.front();
            st.pop_front();
            if(!st.empty()){
                temp+="/";
            }
        }
        return temp;
}
