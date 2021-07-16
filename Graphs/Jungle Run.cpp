//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/jungle-run/

/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

char mat[31][31];
bool visi[31][31];
int dist[31][31];
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
int n;
bool isvalid(int x,int y){
	if(x>n || x<1 || y>n || y<1)return 0;
	if(visi[x][y]==1 || mat[x][y]=='T')return 0;
	return 1;
}

void bfs(int srcx,int srcy){
	queue<pair<int,int>>q;
	q.push({srcx,srcy});
	dist[srcx][srcy]=0;
	visi[srcx][srcy]=1;
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		int d=dist[x][y];
		q.pop();
		for(int i=0;i<4;i++){
			int newx=x+dx[i];
			int newy=y+dy[i];
			if(isvalid(newx,newy)){
				q.push({newx,newy});
				dist[newx][newy]=1+d;
				visi[newx][newy]=1;
			}
		}
	}
}


int main(){
	cin>>n;
	int srcx,srcy,endx,endy;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>mat[i][j];
			if(mat[i][j]=='S'){
				srcx=i;
				srcy=j;
			}
			if(mat[i][j]=='E'){
				endx=i;
				endy=j;
			}
		}
	}

  bfs(srcx,srcy);
  cout<<dist[endx][endy]<<endl;
}
