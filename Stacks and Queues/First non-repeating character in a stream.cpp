//https://www.interviewbit.com/old/problems/first-non-repeating-character-in-a-stream-of-characters/

string Solution::solve(string A) {
    queue<char>q;
    vector<int>v(26,0);
    string res;
    q.push(A[0]);
    v[A[0]-'a']++;
    res.push_back(q.front());
    for(int i=1;i<A.size();i++){
        v[A[i]-'a']++;
        if(v[A[i]-'a']==1)q.push(A[i]);
        while(!q.empty() && v[q.front()-'a']!=1){
            q.pop();
        }
        if(q.empty()){
            res.push_back('#');
        }else{
            res.push_back(q.front());
        }
    }
    return res;
}
