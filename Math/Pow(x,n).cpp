//https://leetcode.com/problems/powx-n/

/*
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
*/

class Solution {
public:

    double myPow(double x, int n) {
       if(x==0)return 0;
        if(n==1)return x;
        long long p=n;
        if(n<0)p*=-1;
        double ans=1.0;
        while(p>0){
            if(p & 1){
                ans*=x;
            }
            p=p>>1;
            x*=x;
        }
        
        if(n>0)return ans;
        else return 1/ans;
       
    }
};
