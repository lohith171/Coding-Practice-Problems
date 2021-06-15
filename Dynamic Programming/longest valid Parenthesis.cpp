//https://leetcode.com/problems/longest-valid-parentheses/

int longestValidParentheses(string s) {
         stack<int>st;
        int n=s.length();
        if(n==0)return 0;
        vector<bool>v(n,true);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }else{
                if(!st.empty()){
                    st.pop();
                }else{
                    v[i]=false;
                }
            }
        }
        while(!st.empty()){
            v[st.top()]=false;
            st.pop();
        }
        int temp=-1;
        int m=INT_MIN;
        for(int i=0;i<n;i++){
            if(v[i]==false){
                m=max(m,i-temp-1);
                temp=i;
            }
        }
        if(temp==-1)return n;
        m=max(m,n-temp-1);
        return m;
    }
