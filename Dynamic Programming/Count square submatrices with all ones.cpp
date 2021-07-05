//https://leetcode.com/problems/count-square-submatrices-with-all-ones/

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int res=0,m=matrix.size(),n=matrix[0].size();
        unordered_map<int,int>map;
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            if(matrix[i][0]==1){
                dp[i][0]=1;
                map[1]++;
            }
        }
        for(int j=1;j<n;j++){
            if(matrix[0][j]==1){
                dp[0][j]=1;
                map[1]++;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==1){
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                    map[dp[i][j]]++; 
                }
            }
        }
        for(auto x:map){
            res+=x.second*x.first;
        }
        return res;
    }
};
