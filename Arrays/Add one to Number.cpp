//https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) {
    int carry=1;
    int n=A.size();
    int i=n-1;
    while(i>=0){
        int x=(A[i]+carry)%10;
        carry= (A[i]+carry)/10;
        A[i]=x;
        i--;
    }
    if(carry!=0){
        A.insert(A.begin(),carry);
    }
    vector<int>res;
    bool flag=false;
    for(int i=0;i<A.size();i++){
        if(A[i]==0 && flag==false){
            continue;
        }else if(flag==false && A[i]!=0){
            res.push_back(A[i]);
            flag=true;
        }else{
            res.push_back(A[i]);
        }
    }
    
    return res;
}
