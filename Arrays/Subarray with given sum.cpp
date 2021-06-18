//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#

vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        int st=0,j=1;
        int sum=arr[0];
        if(sum==s)return {1,1};
        bool flag=false;
        while(j<n){
            if(sum+arr[j]<=s){
                sum+=arr[j];
                if(sum==s){
                    flag=true;
                    break;
                }
                j++;
            }else{
                sum-=arr[st];
                st++;
            }
            if(st==j){
                sum+=arr[st];
                if(sum==s){
                    flag=true;
                    break;
                }
                j++;
            }
        }
        if(!flag)return {-1};
        return {st+1,j+1};
    }
