//https://www.interviewbit.com/old/problems/merge-k-sorted-arrays/

vector<int> Solution::solve(vector<vector<int> > &A) {
    if(A.size()==0)return {};
    int k=A.size(),n=A[0].size();
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            pq.push(A[i][j]);
        }
    }
    vector<int>res;
    while(!pq.empty()){
        res.push_back(pq.top());
        pq.pop();
    }
    return res;
}
