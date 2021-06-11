//https://www.interviewbit.com/problems/atoi/

int Solution::atoi(const string A) {
    int n=A.size();
    if(n==0)return 0;
    bool flag=false;
    string s;
    for(int i=0;i<n;i++){
        if(A[i]>='0' && A[i]<='9'){
            if(!flag){
                flag=true;
                s.push_back(A[i]);
            }else{
                s.push_back(A[i]);
            }
        }else if(A[i]==' '){
            if(flag)break;
        }else if(A[i]=='-' || A[i]=='+'){
            if(!flag){
                flag=true;
                s.push_back(A[i]);
            }else break;
        } else{
            if(!flag)return 0;
            else break;
        }
    }
    if(s.size()==1){
        if(s[0]=='-' || s[0]=='+')return 0;
        else return s[0]-'0';
    }
    long long int res=0,i;
    bool neg=false;
    if(s[0]=='-'){
        neg=true;
        i=1;
    }else if(s[0]=='+'){
        i=1;
    }else i=0;
    while(i<s.size()){
        res=(res*10)+(s[i]-'0');
        if(neg){
            long long int k=res*(-1);
            if(k<=INT_MIN)return INT_MIN;
        }else{
            if(res>+INT_MAX)return INT_MAX;
        }
        i++;
    }
    if(neg){
        res=res*(-1);
    }
   
    return res;
}
