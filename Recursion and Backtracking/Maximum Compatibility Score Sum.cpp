//https://leetcode.com/problems/maximum-compatibility-score-sum/

/*There is a survey that consists of n questions where each question's answer is either 0 (no) or 1 (yes).

The survey was given to m students numbered from 0 to m - 1 and m mentors numbered from 0 to m - 1. The answers of the students are represented by a 2D integer array students where students[i] is an integer array that contains the answers of the ith student (0-indexed). The answers of the mentors are represented by a 2D integer array mentors where mentors[j] is an integer array that contains the answers of the jth mentor (0-indexed).

Each student will be assigned to one mentor, and each mentor will have one student assigned to them. The compatibility score of a student-mentor pair is the number of answers that are the same for both the student and the mentor.

For example, if the student's answers were [1, 0, 1] and the mentor's answers were [0, 0, 1], then their compatibility score is 2 because only the second and the third answers are the same.
You are tasked with finding the optimal student-mentor pairings to maximize the sum of the compatibility scores.

Given students and mentors, return the maximum compatibility score sum that can be achieved.
*/

class Solution {
public:
    int res=0;
    void solve(int ind,int sum,vector<bool>& v,vector<vector<int>>& s,vector<vector<int>>& m){
        if(ind==s.size()){
            res=max(res,sum);
            return;
        }
        for(int i=0;i<s.size();i++){
            if(v[i]==0){
                int c=0;
                for(int j=0;j<s[0].size();j++){
                    if(s[ind][j]==m[i][j])c++;
                }
                v[i]=1;
                solve(ind+1,sum+c,v,s,m);
                v[i]=0;
            }
        }
    }
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        vector<bool>v(students.size(),0);
        solve(0,0,v,students,mentors);
        return res;
    }
};
