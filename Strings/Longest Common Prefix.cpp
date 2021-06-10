//https://www.interviewbit.com/problems/longest-common-prefix/

string Solution::longestCommonPrefix(vector<string> &A) {
    int n=A.size();
    if(n==0)return "";
    bool flag=true;
    int i=0;
    string s=A[0],res;
    while(i<s.length()){
        if(!flag)break;
        for(int j=1;j<n;j++){
            if(i==A[j].length() || A[j][i]!=s[i]){
                flag=false;
                break;
            }
        }
        if(flag)res.push_back(s[i]);
        i++;
    }
    return res;
}
