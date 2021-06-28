//https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/

int numberOfSubstrings(string s) {
        vector<int>m(3,0);
        int res=0,n=s.size(),k=0;
        for(int i=0;i<n;i++){
            m[s[i]-'a']++;
            if(m[0]>0 && m[1]>0 && m[2]>0){
                while(m[0]>0 && m[1]>0 && m[2]>0){
                    res+=n-1-i+1;
                    m[s[k]-'a']--;
                    k++;
                }
            }
            if(k>n-3)break;
            
        }
        return res;
    }
