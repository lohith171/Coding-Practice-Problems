class Solution {
public:
    int m,n;
   
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    bool isvalid(int x,int y,vector<vector<char>>& maze, vector<vector<bool>>& visi){
        if(x<0 || x>=m || y<0 || y>=n)return 0;
        if(visi[x][y] ||maze[x][y]=='+')return 0;
        return 1;
    }
    
    void bfs(int stx,int sty,vector<vector<char>>& maze,vector<vector<int>>& dist, vector<vector<bool>>& visi){
        queue<pair<int,int>>q;
        q.push({stx,sty});
        dist[stx][sty]=0;
        visi[stx][sty]=1;
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(isvalid(nx,ny,maze,visi)){
                    q.push({nx,ny});
                    dist[nx][ny]=1+dist[x][y];
                    visi[nx][ny]=1;
                }
            }
        }
    }
    
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
         m=maze.size();
         n=maze[0].size();
        vector<vector<int>>dist(m,vector<int>(n,INT_MAX));
        vector<vector<bool>>visi(m,vector<bool>(n,0));
        bfs(entrance[0],entrance[1],maze,dist,visi);
        int res=INT_MAX;
      // The entrance may lie on the borders,so to not include that we make that distance as INT_MAX....
        dist[entrance[0]][entrance[1]]=INT_MAX;
        for(int i=0;i<m;i++){
            res=min(res,dist[i][0]);
            res=min(res,dist[i][n-1]);
        }
        for(int j=1;j<n-1;j++){
            res=min(res,dist[0][j]);
            res=min(res,dist[m-1][j]);
        }
        if(res==INT_MAX)return -1;
        return res;
        
    }
};
