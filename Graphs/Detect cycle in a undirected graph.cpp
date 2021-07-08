//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1/

class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool solve(int val,int parent,vector<int>adj[],vector<bool>& visi){
        visi[val]=1;
        for(auto x:adj[val]){
            if(!visi[x]){
                if(solve(x,val,adj,visi))return 1;
            }else if(x!=parent)return 1;

        }
        return 0;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<bool>visi(V,0);
	    for(int i=0;i<V;i++){
	        if(!visi[i]){
	            if(solve(i,-1,adj,visi))return 1;
	        }
	    }
	    return 0;
	}
};
