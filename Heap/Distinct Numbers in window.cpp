//https://www.interviewbit.com/old/problems/distinct-numbers-in-window/

vector<int> Solution::dNums(vector<int> &A, int B) {
    int n=A.size();
    if(B>n)return {};
    unordered_map<int,int>m;
    for(int i=0;i<B;i++){
        m[A[i]]++;
    }
    vector<int>res;
    res.push_back(m.size());
    int st=0;
    for(int i=B;i<n;i++){
        m[A[st]]--;
        if(m[A[st]]==0)m.erase(A[st]);
        st++;
        m[A[i]]++;
        res.push_back(m.size());
    }
    return res;
}
