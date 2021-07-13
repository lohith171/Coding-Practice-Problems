//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int>res;
	    vector<bool>visi(V,0);
	    queue<int>q;
	    q.push(0);
	    visi[0]=1;
	    while(!q.empty()){
	        int t=q.front();
	        q.pop();
	        res.push_back(t);
	        for(auto x:adj[t]){
	            if(!visi[x]){
	                q.push(x);
	                visi[x]=1;
	            }
	        }
	    }
	    return res;
	}
};

