//https://www.interviewbit.com/old/problems/jump-game-array/

int Solution::canJump(vector<int> &A) {
    int ind=0;
    for(int i=0;i<A.size();i++){
        if(ind>=A.size()-1)return 1;
        if(A[i]==0 && i>=ind)return 0;
        else{
            if(i+A[i]>ind){
                ind=i+A[i];
            }
        }
    }
    return 1;
}
