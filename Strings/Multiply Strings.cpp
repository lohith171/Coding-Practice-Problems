//https://www.interviewbit.com/problems/multiply-strings/

string solve(string a,int a1,string b,int b1){
    string ans;
    int p=a1,q=b1,carr=0,x,y;
    while(p>=0 || q>=0){
        if(p>=0){
            x=a[p]-'0';
        }else x=0;
        if(q>=0){
            y=b[q]-'0';
        }else y=0;
        int val=(x+y+carr)%10;
        carr=(x+y+carr)/10;
        ans+=to_string(val);
        p--;
        q--;
    }
    if(carr!=0){
        ans+=to_string(carr);
    }
    reverse(ans.begin(),ans.end());
    for(int i=a1+1;i<a.size();i++){
        ans.push_back(a[i]);
    }
    return ans;
}



string Solution::multiply(string A, string B) {
    if(A.size()==0 || B.size()==0)return "";
    if(A=="0" || B=="0")return "0";
    int i,j=B.size()-1,c=1;
    string res="";
    while(j>=0){
        i=A.size()-1;
        string temp;
        int carry=0;
        while(i>=0){
            int k=((B[j]-'0')*(A[i]-'0'))+carry;
            temp+=to_string(k%10);
            carry=k/10;
            i--;
        }
        if(carry!=0){
            temp+=to_string(carry);
        }
        reverse(temp.begin(),temp.end());
        string after=solve(res,res.size()-c,temp,temp.size()-1);
        res=after;
        j--;
        c++;
        
    }
    int s;
    for(int i=0;i<res.size();i++){
        if(res[i]!='0'){
            s=i;
            break;
        }
    }
    string sol;
    sol.insert(sol.end(),res.begin()+s,res.end());
    return sol;
    
    
}
