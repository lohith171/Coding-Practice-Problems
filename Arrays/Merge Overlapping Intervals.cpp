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
    int i=0,j=1;
    vector<Interval>res;
    while(j<A.size()){
        int a=A[i].end,b=A[j].start;
        while(j<A.size() && a>=b){
            a=max(a,A[j].end);
            j++;
            b=A[j].start;
        }
        res.push_back(Interval(A[i].start,a));
        if(j==A.size())break;
        i=j;
        j++;
        if(j==A.size()){
            res.push_back(A[i]);
        }
    }
    return res;
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
