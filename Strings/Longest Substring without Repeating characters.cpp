 //https://leetcode.com/problems/longest-substring-without-repeating-characters/

//To maintain the string...
int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int max=0;
        queue<char>q;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            if(m[s[i]]==1){
                q.push(s[i]);
            }else{
                while(q.front()!=s[i]){
                    m[q.front()]--;
                    q.pop();
                }
                q.pop();
                m[s[i]]--;
                q.push(s[i]);
            }
            if(q.size()>max){
                max=q.size();
            }
        }
        return max;
    }

//If only length is asked..

 int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int ma=0,l=0;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
           if(m[s[i]]==1){
               ma=max(ma,i-l+1);
           }else{
              while(s[l]!=s[i]){
                  m[s[l]]--;
                  l++;
              }
               m[s[l]]--;
               l++;
               ma=max(ma,i-l+1);
           }
        }
        return ma;
    }
