class Solution {
    public char findTheDifference(String s, String t) {
        int[] freq = new int[26];
        
        for(char c: s.toCharArray()){
            freq[c-'a']++;
        }
        
        for(char c: t.toCharArray()){
            freq[c-'a']--;
        }
        
        for(int i=0; i<freq.length; i++)
            if(freq[i] == -1)
                return (char)((int)'a'+i);
        
        return '\n';
        
    }
}