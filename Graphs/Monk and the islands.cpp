//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/

#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>>adj(n+1);
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	queue<int>q;
	vector<bool>visi(n+1,0);
	vector<int>v(n+1);
	q.push(1);
	v[1]=0;
	visi[1]=1;
	while(!q.empty()){
		int temp=q.front();
		q.pop();
         
		for(auto x:adj[temp]){
			if(!visi[x]){
               q.push(x);
			   v[x]=v[temp]+1;
			   visi[x]=1;
			}
		}
	}
	cout<<v[n]<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
     solve();
	}
}

