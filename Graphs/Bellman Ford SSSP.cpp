//https://practice.geeksforgeeks.org/problems/negative-weight-cycle3504/1#

class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int>dist(n,INT_MAX);
	    int m=edges.size();
	    dist[0]=0;
	    for(int i=0;i<n-1;i++){
	        for(auto x:edges){
	            if(dist[x[0]]!=INT_MAX && dist[x[1]]>dist[x[0]]+x[2]){
	                dist[x[1]]=dist[x[0]]+x[2];
	            }
	        }
	    }
	    for(auto x:edges){
	            if(dist[x[0]]!=INT_MAX && dist[x[1]]>dist[x[0]]+x[2]){
	                return 1;
	            }
	        }
	        return 0;
	}
};
