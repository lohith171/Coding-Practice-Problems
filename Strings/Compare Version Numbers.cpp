//https://www.interviewbit.com/problems/compare-version-numbers/

int Solution::compareVersion(string A, string B) {
    vector<string>v1,v2;
    string temp;
    bool flag=false;
    for(int i=0;i<A.size();i++){
        if(A[i]=='.'){
            v1.push_back(temp);
            temp.clear();
            flag=false;
        }else if(A[i]=='0'){
            if(flag)temp.push_back(A[i]);
        }else{
            temp.push_back(A[i]);
            flag=true;
        }
    }
    v1.push_back(temp);
    temp.clear();
     for(int i=0;i<B.size();i++){
        if(B[i]=='.'){
            v2.push_back(temp);
            temp.clear();
        }else temp.push_back(B[i]);
    }
    v2.push_back(temp);
    int i=0,j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]!=v2[j]){
            if(v1[i].size()!=v2[j].size()){
                if(v1[i].size()>v2[j].size())return 1;
                else return -1;
            }else{
                if(v1[i]>v2[j])return 1;
                else return -1;
            }
    
    }
    i++;
    j++;
        
    }
    return 0;
}
