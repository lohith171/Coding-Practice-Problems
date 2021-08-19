/*
Given a number N, find all factors of N.

Example:

N = 6 
factors = {1, 2, 3, 6}
Make sure the returned array is sorted.
*/

vector<int> Solution::allFactors(int A) {
    vector<int>res;
    for(int i=1;i<=sqrt(A);i++){
        if(i*i==A)res.push_back(i);
        else if(A%i==0){
            res.push_back(i);
            res.push_back(A/i);
        }
    }
    sort(res.begin(),res.end());
    return res;
}
