//https://www.interviewbit.com/old/problems/merge-overlapping-intervals/


/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool comp(Interval a,Interval b){
     if(a.start!=b.start)return a.start<b.start;
     return a.end<b.end;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    if(A.size()<=1)return A;
    sort(A.begin(),A.end(),comp);
    int i=0;
    vector<Interval>res;
    while(i<A.size()){
        int j=i+1,a=A[i].end;
        while(j<A.size() && a>=A[j].start){
            a=max(a,A[j].end);
            j++;
        }
        res.push_back(Interval(A[i].start,a));
        i=j;
    }
   
    return res;
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
