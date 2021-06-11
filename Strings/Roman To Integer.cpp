//https://www.interviewbit.com/problems/roman-to-integer/

int Solution::romanToInt(string A) {
    unordered_map<char,int>m{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int n=A.size();
    int res=0,i;
    for(i=n-1;i>0;i--){
        if(m[A[i]]>m[A[i-1]]){
            res+=m[A[i]]-m[A[i-1]];
            i--;
        }else{
            res+=m[A[i]];
        }
    }
    if(i==0){
        res+=m[A[0]];
    }
    return res;
}
