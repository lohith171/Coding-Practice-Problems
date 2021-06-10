//https://www.interviewbit.com/problems/vowel-and-consonant-substrings/

bool isvow(char ch){
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int Solution::solve(string A) {
    int n=A.length();
    if(n<=1)return 0;
    long long k=pow(10,9)+7;
    unordered_map<int,int>m;
    int res=0;
    for(int i=1;i<n;i++){
       if(isvow(A[i]))m[0]++;
       else m[1]++;
    }
    int i=0;
    while(i<n-1){
        if(isvow(A[i])){
            res=(res+m[1])%k;
        }else{
            res=(res+m[0])%k;
        }
        i++;
        if(isvow(A[i])){
            m[0]--;
        }else{
            m[1]--;
        }
    }
    return res%k;
}
