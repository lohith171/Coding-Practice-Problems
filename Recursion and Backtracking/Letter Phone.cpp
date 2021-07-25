//https://www.interviewbit.com/problems/letter-phone/

/*Given a digit string, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below.



The digit 0 maps to 0 itself.

The digit 1 maps to 1 itself.
*/

void solve(int ind,string& A,string s,vector<string>& res,vector<vector<char>>& v){
   if(ind==A.size()){
       res.push_back(s);
       return;
   }
       for(auto ch:v[A[ind]-'0']){
           s.push_back(ch);
           solve(ind+1,A,s,res,v);
           s.pop_back();
       }
}


vector<string> Solution::letterCombinations(string A) {
    vector<string>res;
    string s;
    vector<vector<char>>v={{'0'},{'1'},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
     solve(0,A,s,res,v);
     return res;
}
