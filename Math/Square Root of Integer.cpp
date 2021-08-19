//https://practice.geeksforgeeks.org/problems/square-root/1
/*
Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).
*/

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
         if(x==0 || x==1)return x;
    long long int l=1,h=x,res;
    while(l<=h){
        long long int mid=l+(h-l)/2;
        if(mid<=x/mid){
            l=mid+1;
            res=mid;
        }
        else h=mid-1;
    }
    return res;
    }
};
