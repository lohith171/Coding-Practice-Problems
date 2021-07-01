//https://www.interviewbit.com/old/problems/magician-and-chocolates/

int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<int>pq;
    for(int i=0;i<B.size();i++){
        pq.push(B[i]);
    }
    long long res=0;
    long long  mod=1e9+7;
    while(A--){
        int k=pq.top();
        pq.pop();
        res+=k%mod;
        pq.push(k/2);
    }
    return res%mod;
}
