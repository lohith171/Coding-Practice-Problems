//https://www.interviewbit.com/problems/add-binary-strings/

string Solution::addBinary(string A, string B) {
    string res;
    char carry='0',x,y,val;
    int i=A.size()-1,j=B.size()-1;
    while(i>=0 || j>=0){
        if(i>=0){
            x=A[i];
        }else x='0';
        if(j>=0){
            y=B[j];
        }else y='0';
        
        if(x=='1' && y=='1'){
            if(carry=='1'){
                carry='1';
                val='1';
            }else{
                carry='1';
                val='0';
            }
        }else if(x=='0' && y=='0'){
            if(carry=='1'){
                carry='0';
                val='1';
            }else{
                carry='0';
                val='0';
            }
        }else{
            if(carry=='1'){
                carry='1';
                val='0';
            }else{
                carry='0';
                val='1';
            }
        }
        res.push_back(val);
        i--;
        j--;
        
    }
    if(carry=='1')res.push_back(carry);
    reverse(res.begin(),res.end());
    return res;
}
