//https://www.interviewbit.com/problems/count-and-say/

string Solution::countAndSay(int A) {
    if(A==0)return "";
    if(A==1)return "1";
    string s="1";
    int c=1;
    while(c!=A){
        int count=1,n=s.size();
        string temp;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])count++;
            else{
                temp+=to_string(count);
                temp.push_back(s[i]);
                count=1;
            }
        }
        temp+=to_string(count);
        temp.push_back(s[n-1]);
        s=temp;
        c++;
    }
    return s;
}
