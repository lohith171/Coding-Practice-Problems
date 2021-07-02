https://www.interviewbit.com/old/problems/sorted-insert-position/

int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    int low=0,high=A.size()-1,res=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(A[mid]==B)return mid;
        if(A[mid]<B){
            res=mid;
            low=mid+1;
        }else high=mid-1;
    }
    return res+1;
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
