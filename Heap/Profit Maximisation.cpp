//https://www.interviewbit.com/old/problems/profit-maximisation/

int Solution::solve(vector<int> &A, int B) {
    priority_queue<int>pq;
    for(int i=0;i<A.size();i++){
        pq.push(A[i]);
    }
    int res=0;
    for(int i=0;i<B;i++){
        int k=pq.top();
        pq.pop();
        res+=k;
        pq.push(k-1);
    }
    return res;
}
