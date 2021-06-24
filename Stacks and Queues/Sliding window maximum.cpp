//https://www.interviewbit.com/old/problems/sliding-window-maximum/

vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    multiset<int>s;
    for(int i=0;i<B;i++)s.insert(A[i]);
    vector<int>res;
    auto itr=s.rbegin();
    res.push_back(*itr);
    for(int i=1;i<=A.size()-B;i++){
        s.insert(A[i+B-1]);
        s.erase(s.find(A[i-1]));
        auto itr=s.rbegin();
        res.push_back(*itr);
    }
    return res;
}
