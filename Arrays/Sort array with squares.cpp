//https://www.interviewbit.com/problems/sort-array-with-squares/

vector<int> Solution::solve(vector<int> &A) {
    for(int i=0;i<A.size();i++){
        A[i]*=A[i];
    }
    vector<int>res(A.size(),0);
    int ind=A.size()-1;
    int i=0,j=A.size()-1;
    while(i<=j){
        if(A[i]>A[j]){
            res[ind]=A[i];
            i++;
            ind--;
        }else{
            res[ind]=A[j];
            j--;
            ind--;
        }
    }
    return res;
}
