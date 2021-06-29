//https://www.interviewbit.com/old/problems/k-largest-elements/

vector<int> Solution::solve(vector<int> &A, int B) {
    if(B>A.size())return {};
    priority_queue<int>pq;
    for(int i=0;i<A.size();i++){
        pq.push(A[i]);
    }
    vector<int>res;
    for(int i=0;i<B;i++){
        res.push_back(pq.top());
        pq.pop();
    }
    return res;
}
