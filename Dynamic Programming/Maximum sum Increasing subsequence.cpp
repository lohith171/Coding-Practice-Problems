	//https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int>dp(n);
	    for(int i=0;i<n;i++){
	        dp[i]=arr[i];
	    }
	    int m=arr[0];
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[j]<arr[i]){
	            dp[i]=max(dp[i],arr[i]+dp[j]);
	            }
	        }
	        m=max(m,dp[i]);
	    }
	    return m;
	}  
