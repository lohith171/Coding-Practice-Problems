//https://www.interviewbit.com/problems/permutations/

//Given a collection of numbers, return all possible permutations.

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>>res;
    if(A.size()==1)return {A};
    for(int i=0;i<A.size();i++){
        vector<int>temp=A;
        temp.erase(temp.begin()+i);
        vector<vector<int>>tres=permute(temp);
        for(int j=0;j<tres.size();j++){
            vector<int>a={A[i]};
            a.insert(a.end(),tres[j].begin(),tres[j].end());
            res.push_back(a);
        }
    }
    return res;
}
