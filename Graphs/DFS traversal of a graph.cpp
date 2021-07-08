//https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#

class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void dfs(int val,vector<int> adj[],vector<bool>& visi,vector<int>& res){
	    if(visi[val]==1)return;
	        res.push_back(val);
	        visi[val]=1;
	         for(auto x:adj[val]){
	            dfs(x,adj,visi,res);
	    }
	    
	   
	}
      vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    vector<bool>visi(V,false);
	    vector<int>res;
	    for(int i=0;i<V;i++){
	        dfs(i,adj,visi,res);
	    }
	    return res;
	}
};
