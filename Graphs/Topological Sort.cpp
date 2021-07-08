//https://practice.geeksforgeeks.org/problems/topological-sort/1#

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void solve(int val,vector<int> adj[],vector<bool>& visi,vector<int>& res){
	    visi[val]=true;
	    for(auto x:adj[val]){
	        if(!visi[x]){
	            solve(x,adj,visi,res);
	        }
	    }
	    res.push_back(val);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>res;
	    vector<bool>visi(V,0);
	    for(int i=0;i<V;i++){
	        if(!visi[i]){
	            solve(i,adj,visi,res);
	        }
	    }
	    reverse(res.begin(),res.end());
	    return res;
	    
	}
};
