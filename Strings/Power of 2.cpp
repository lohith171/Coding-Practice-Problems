//https://www.interviewbit.com/problems/power-of-2/

int Solution::power(string A) {
    if(A.size()==1){
        if((A[0]-'0')%2==0)return 1;
        else return 0;
    }
    
    int i=A.size()-1;
    if((A[i]-'0')%2!=0)return 0;
    i=0;
    string temp;
    int carry=0;
    while(i<A.size()){
        if(A[i]=='1' && carry==0){
            if(i!=0) temp.push_back('0');
           i++;
           carry=1;
            
        }
            int v=carry*10+(A[i]-'0');
            temp.push_back((v/2)+'0');
            carry=v%2;
            i++;
    }
    return power(temp);
}
