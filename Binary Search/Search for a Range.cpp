//https://www.interviewbit.com/old/problems/search-for-a-range/

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int i=-1,j=-1,m;
    int l=0,h=A.size();
    while(l<=h){
        m=(l+h)/2;
        if(A[m]==B && (m==0 || A[m-1]!=B)){
            i=m;
            break;
        }
        if(A[m]<B){
            l=m+1;
        }else if(A[m]>=B){
            h=m-1;
        }
        
    }
    l=i,h=A.size()-1;
    while(l<=h){
        m=(l+h)/2;
        if(A[m]==B &&(m==A.size()-1 || A[m+1]!=B)){
            j=m;
            break;
        }
        if(A[m]<=B){
            l=m+1;
        }else if(A[m]>B){
            h=m-1;
        }
        
    }
    return {i,j};
    
}
