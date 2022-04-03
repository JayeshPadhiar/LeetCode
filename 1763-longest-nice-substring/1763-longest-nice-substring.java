class Solution {
    public String longestNiceSubstring(String s) {
        
        String ans = "";
        
        int windowLen = 0;
        while(windowLen < s.length()){
            int j=0;
            for(int i=windowLen; i<s.length(); i++, j++){
                if(isNice(s.substring(j, i+1))){
                    if(i+1-j > ans.length())
                        ans = s.substring(j, i+1);
                }
            }
            windowLen++;
        }
        return ans;
    }
    
    public boolean isNice(String s){
        HashSet<Character> lower = new HashSet();
        HashSet<Character> upper = new HashSet();
        
        for(char c: s.toCharArray()){
            if(Character.isLowerCase(c))
                lower.add(c);
            else
                upper.add(c);
        }
        for(char c: s.toCharArray()){
            if(lower.contains(Character.toLowerCase(c)) && 
               upper.contains(Character.toUpperCase(c))){}
            else
                return false;
        }
        return true;
    }
}