 //https://leetcode.com/problems/longest-substring-without-repeating-characters/

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
