//https://www.interviewbit.com/problems/remove-consecutive-characters/

string Solution::solve(string A, int B) {
    int n=A.length();
    if(n==0)return "";
    stack<pair<char,int>>st;
    st.push({A[0],1});
    for(int i=1;i<n;i++){
        if(A[i]==A[i-1]){
        if(!st.empty() && st.top().first==A[i]){
            int k=st.top().second+1;
            st.pop();
            if(k!=B)
            st.push({A[i],k});
            
        }
        }else st.push({A[i],1});
        }
    string res;
    while(!st.empty()){
        for(int i=0;i<st.top().second;i++){
            res.push_back(st.top().first);
        }
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
    
}
