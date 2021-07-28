//https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    typedef  pair<int,int>  pr;
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>dist(V,INT_MAX);
        vector<bool>visi(V,0);
        dist[S]=0;
        priority_queue<pr,vector<pr>,greater<pr>>pq;
        pq.push({0,S});
        while(!pq.empty()){
            int v=pq.top().second;
            pq.pop();
            if(!visi[v]){
            for(auto x:adj[v]){
                int a=x[0],b=x[1];
            
                    if(dist[v]+b<dist[a]){
                        dist[a]=dist[v]+b;
                        pq.push({dist[a],a});
                    }
            }
            visi[v]=1;
            }
        }
        return dist;
    }
};

