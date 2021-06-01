//https://www.interviewbit.com/problems/pascal-triangle/

vector<vector<int> > Solution::solve(int A) {
    if(A==0)return {};
    vector<vector<int>>res;
    res.push_back({1});
    for(int i=1;i<A;i++){
        vector<int>temp;
        temp.push_back(res[i-1][0]);
        for(int j=1;j<res[i-1].size();j++){
            temp.push_back(res[i-1][j]+res[i-1][j-1]);
        }
        temp.push_back(res[i-1][res[i-1].size()-1]);
        res.push_back(temp);
        
    }
    return res;
    
}
