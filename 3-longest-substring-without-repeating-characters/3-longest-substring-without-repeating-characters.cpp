class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length() == 0)
            return 0;
        
        unordered_map<char, int> map;
        int maxlen=0;
        
        int i=0, j=0;
        
        for(i=0; i<s.length(); i++){
            if(map.find(s[i]) != map.end()){
                j = max(j,map[s[i]]+1);
            }
            
            map[s[i]] = i;
            maxlen = max(maxlen, i-j+1);
        }
        
        return maxlen;
        
        
    }
};