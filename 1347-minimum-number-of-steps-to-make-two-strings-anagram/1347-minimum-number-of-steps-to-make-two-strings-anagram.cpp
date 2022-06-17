class Solution {
public:
    int minSteps(string a, string b) {
        int count=0;
        int freq[26]={0};
        
        for(int i=0; i<a.length(); i++){
            freq[a[i]-'a']++;
            freq[b[i]-'a']--;
        }
        
        for(int i=0; i<26; i++){
            if(freq[i]>0)
                count+=freq[i];
        }
        
        return count;
    }
};