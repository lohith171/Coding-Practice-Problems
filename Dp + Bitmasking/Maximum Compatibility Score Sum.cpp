//https://leetcode.com/problems/maximum-compatibility-score-sum/
/*
There is a survey that consists of n questions where each question's answer is either 0 (no) or 1 (yes).

The survey was given to m students numbered from 0 to m - 1 and m mentors numbered from 0 to m - 1. The answers of the students are represented by a 2D integer array students where students[i] is an integer array that contains the answers of the ith student (0-indexed). The answers of the mentors are represented by a 2D integer array mentors where mentors[j] is an integer array that contains the answers of the jth mentor (0-indexed).

Each student will be assigned to one mentor, and each mentor will have one student assigned to them. The compatibility score of a student-mentor pair is the number of answers that are the same for both the student and the mentor.

For example, if the student's answers were [1, 0, 1] and the mentor's answers were [0, 0, 1], then their compatibility score is 2 because only the second and the third answers are the same.
You are tasked with finding the optimal student-mentor pairings to maximize the sum of the compatibility scores.

Given students and mentors, return the maximum compatibility score sum that can be achieved.
*/

class Solution {
public:
   int solve(int ind,int mask,vector<vector<int>>& a,vector<vector<int>>&                                                                                  b,vector<vector<int>>& dp){
       if(ind==a.size())return 0;
       if(dp[ind][mask]!=-1)return dp[ind][mask];
       int ans=0;
       for(int i=0;i<b.size();i++){
           if(mask & 1<<i){
               int c=0;
               for(int j=0;j<b[i].size();j++){
                   if(a[ind][j]==b[i][j])c++;
               }
               ans=max(ans,c+solve(ind+1,mask^1<<i,a,b,dp));
           }
       }
       return dp[ind][mask]=ans;
   }
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        int n=students.size();
        vector<vector<int>>dp(n,vector<int>(1<<n,-1));
        return solve(0,(1<<n)-1,students,mentors,dp);
    }
};
