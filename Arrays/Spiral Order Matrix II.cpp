vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>>res(A,vector<int>(A));
    int k=1,t=0,b=A-1,l=0,r=A-1,d=0;
    while(k<=A*A){
        if(d==0){
            for(int i=l;i<=r;i++){
                res[t][i]=k;
                k++;
            }
            t++;
        }else if(d==1){
            for(int i=t;i<=b;i++){
                res[i][r]=k;
                k++;
            }
            r--;
        }else if(d==2){
            for(int i=r;i>=l;i--){
                res[b][i]=k;
                k++;
            }
            b--;
        }else{
            for(int i=b;i>=t;i--){
                res[i][l]=k;
                k++;
            }
            l++;
        }
        d=(d+1)%4;
    }
    return res;
}
