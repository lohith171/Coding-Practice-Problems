https://www.interviewbit.com/old/problems/matrix-search/

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int m=A.size(),n=A[0].size();
    for(int i=0;i<m;i++){
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(A[i][mid]==B)return 1;
            else if(A[i][mid]<B){
                low=mid+1;
            }else high=mid-1;
        }
    }
    return 0;
}
