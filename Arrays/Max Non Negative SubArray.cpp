//https://www.interviewbit.com/old/problems/max-non-negative-subarray/

vector<int> Solution::maxset(vector<int> &A) {
    vector<int>temp,res;
    long long sum=0,best=0;
    for(int i=0;i<A.size();i++){
        if(A[i]<0){
            if(sum>best){
                best=sum;
                res=temp;
            }else if(sum==best){
                if(temp.size()>res.size()){
                    res=temp;
                }
            }
            temp.clear();
            sum=0;
            continue;
        }
        sum+=A[i];
        temp.push_back(A[i]);
    }
     if(sum>best){
                best=sum;
                res=temp;
            }else if(sum==best){
                if(temp.size()>res.size()){
                    res=temp;
                }
            }
    
    return res;
}
