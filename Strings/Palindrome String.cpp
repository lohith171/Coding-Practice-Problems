//https://www.interviewbit.com/problems/palindrome-string/

int Solution::isPalindrome(string A) {
    string res;
    for(int i=0;i<A.length();i++){
        if(A[i]<'a' && A[i]>'z'  || A[i]<'A' && A[i]>'Z' || A[i]<'0' && A[i]>'9'){
            continue;
        }else if(A[i]>='a' && A[i]<='z')res.push_back(A[i]);
        else if(A[i]>='A' && A[i]<='Z')res.push_back(A[i]+32);
        else if(A[i]>='0' && A[i]<='9')res.push_back(A[i]);
    }
    int i=0,j=res.length()-1;
    while(i<=j){
        if(res[i++]!=res[j--])return false;
        
    }
    return true;
}
