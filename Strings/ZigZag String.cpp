//https://www.interviewbit.com/problems/zigzag-string/

string Solution::convert(string A, int B) {
    int n=A.size();
    if(B==1)return A;
    vector<vector<char>>v(B,vector<char>(n,' '));
    int k=0,i=0,j=0;
    bool flag=true;
    while(k<n){
        v[i][j++]=A[k++];
        if(flag){
            i++;
            if(i==B){
                flag=false;
                i-=2;
            }
        }else{
            i--;
            if(i==-1){
                flag=true;
                i+=2;
            }
        }
        
    }
    string res;
    for(i=0;i<B;i++){
        for(j=0;j<n;j++){
            if(v[i][j]!=' ')res.push_back(v[i][j]);
        }
    }
    return res;
}
