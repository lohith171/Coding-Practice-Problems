//https://www.interviewbit.com/problems/implement-power-function/

/*
Implement pow(x, n) % d.
In other words, given x, n and d,

find (xn % d)

Note that remainders on division cannot be negative. In other words, make sure the answer you return is non negative.

Input : x = 2, n = 3, d = 3
Output : 2


2^3 % 3 = 8 % 3 = 2.
*/

int Solution::pow(int x, int n, int d) {
     if(x==0)return 0;
     while(x<0){
         x+=d;
         x=x%d;
     }
     long long a=x;
     int ans=1;
     while(n>0){
         if(n%2!=0){
             ans=(ans*a)%d;
         }
         n=n/2;
         a=(a*a)%d;
     }
     return ans;
}
