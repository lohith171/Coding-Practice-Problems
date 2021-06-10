//https://www.interviewbit.com/problems/length-of-last-word/

int Solution::lengthOfLastWord(const string A) {
    int res=0;
    int n=A.size();
    bool flag=false;
    for(int i=n-1;i>=0;i--){
        if(A[i]==' '){
            if(flag)break;
        }else{
            flag=true;
            res++;
        }
    }
    return res;
}
