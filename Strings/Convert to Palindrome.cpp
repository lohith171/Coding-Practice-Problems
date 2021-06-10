//https://www.interviewbit.com/problems/convert-to-palindrome/

int ispal(string s){
    int n=s.length();
    if(n==0 || n==1)return 1;
    int i=0,j=n-1;
    while(i<=j){
        if(s[i]!=s[j])return 0;
        i++;
        j--;
    }
    return 1;
}

int Solution::solve(string A) {
    if(ispal(A))return 1;
    int len=A.length();
    string s1,s2;
    int i=0,j=len-1;
    while(i<=j){
        if(A[i]!=A[j])break;
        i++;
        j--;
    }
    for(int k=0;k<len;k++){
        if(k!=i){
            s1.push_back(A[k]);
        }
        if(k!=len-1-j){
            s2.push_back(A[k]);
        }
    }
    return ispal(s1) || ispal(s2);
}
