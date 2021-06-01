//https://www.interviewbit.com/problems/anti-diagonals/

vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size();
    if(n==1)return A;
    vector<vector<int>>res;
    res.push_back({A[0][0]});
    int i=0,j=1;
    bool flag=false;
    while(true){
        int i1=i,j1=j;
        vector<int>temp;
        while(i1<n && j1>=0){
            temp.push_back(A[i1][j1]);
            i1++;
            j1--;
        }
        res.push_back(temp);
        if(flag==false)j++;
        else i++;
        if(j==n){
            flag=true;
            j--;
            i++;
        }
        if(i==n-1 && j==n-1){
            res.push_back({A[i][j]});
            break;
        }
    }
    return res;
}
