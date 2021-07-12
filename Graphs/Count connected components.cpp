#include<bits/stdc++.h>
using namespace std;

void solve(int val,vector<vector<int>>& adj,vector<bool>& visi){
	visi[val]=true;
	for(auto x:adj[val]){
		if(!visi[x]){
			solve(x,adj,visi);
		}
	}
}


int main(){
	int n,e;
	cin>>n>>e;
	vector<vector<int>>adj(n+1);
	for(int i=0;i<e;i++){
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<bool>visi(n+1,0);
	int res=0;
	for(int i=1;i<=n;i++){
		if(!visi[i]){
			res++;
			solve(i,adj,visi);
		}
	}
  cout<<res<<endl;
}
