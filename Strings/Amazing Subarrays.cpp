//https://www.interviewbit.com/problems/amazing-subarrays/

bool isvow(char ch){
    return (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U');
}

int Solution::solve(string A) {
    int n=A.length();
    if(n==0)return 0;
    int res=0;
    for(int i=0;i<n;i++){
        if(isvow(A[i]))res+=n-i%10003;
    }
    return res%10003;
}
