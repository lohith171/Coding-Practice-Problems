//https://www.interviewbit.com/problems/implement-strstr/

int Solution::strStr(const string A, const string B) {
    if(A.length()==0 || B.length()==0)return -1;
    int j=0;
    for(int i=0;i<A.length();i++){
        if(A[i]==B[j]){
            j++;
        }else{
            i-=j;
            j=0;
        }
        if(j==B.length())return i-j+1;
    }
    return -1;
}
