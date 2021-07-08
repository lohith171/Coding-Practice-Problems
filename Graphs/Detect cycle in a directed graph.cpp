//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1#

class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool solve(int val,vector<int> adj[],vector<bool>& visi,vector<bool>& stk){
	    visi[val]=1;
	    stk[val]=1;
	    for(auto x:adj[val]){
	        if(stk[x])return 1;
	        if(!visi[x]){
	            if(solve(x,adj,visi,stk))return 1;
	        }
	    }
	    stk[val]=0;
	    return 0;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	vector<bool>visi(V,0);
	   	vector<bool>stk(V,0);
	   	for(int i=0;i<V;i++){
	   	    if(!visi[i]){
	   	        if(solve(i,adj,visi,stk))return 1;
	   	    }
	   	}
	   	return 0;
	}
};
