//https://www.interviewbit.com/problems/minimum-appends-for-palindrome/

int Solution::solve(string A) {
    int len=A.size();
    int res=-1,i=0,j=len-1;
    
    while(i<=j){
        if(A[i]!=A[j]){
            res=i;
            i++;
            j=len-1;
        }else{
            i++;
            j--;
        }
    }
    return res+1;
}
