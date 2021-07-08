//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    queue<int>q;
	    q.push(0);
	    vector<int>res;
	    vector<bool>visi(V,0);
	    while(!q.empty()){
	        int temp=q.front();
	        q.pop();
	       if(visi[temp]==0){
	            res.push_back(temp);
	        for(auto x:adj[temp]){
	            if(!visi[x])
	            q.push(x);
	        }
	        visi[temp]=1;
	       }
	    }
	    return res;
	}
};
