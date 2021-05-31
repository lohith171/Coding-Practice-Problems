int Solution::perfectPeak(vector<int> &A) {
    set<int>s1,s2;
    if(A.size()<=2)return 0;
    s1.insert(A[0]);
    int i;
    for(i=2;i<A.size();i++){
        s2.insert(A[i]);
    }
    i=1;
    while(i<A.size()-1 && !s1.empty() && !s2.empty()){
        int max = *s1.rbegin();
        int min= *s2.begin();
        if(A[i]>max && A[i]<min){
            return true;
        }
        s1.insert(A[i]);
        s2.erase(A[i+1]);
        i++;
    }
    return false;
}
