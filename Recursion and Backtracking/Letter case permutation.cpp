//https://leetcode.com/problems/letter-case-permutation/
/*
Given a string s, we can transform every letter individually to be lowercase or uppercase to create another string.

Return a list of all possible strings we could create. You can return the output in any order.
*/


class Solution {
public:
    void solve(int ind,string& t,string& s,vector<string>& res){
        if(ind==s.size()){
            res.push_back(t);
            return;
        }
        if(s[ind]>='a' && s[ind]<='z'){
            t.push_back(s[ind]);
            solve(ind+1,t,s,res);
            t.pop_back();
            t.push_back(s[ind]-32);
            solve(ind+1,t,s,res);
            t.pop_back();
        }else{
            t.push_back(s[ind]);
            solve(ind+1,t,s,res);
            t.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z')s[i]+=32;
        }
        string t;
        vector<string>res;
        solve(0,t,s,res);
        return res;
    }
};
