class Solution {
    public int lengthOfLastWord(String s) {
        
        boolean wordStarted = false;
        int index = s.length()-1;
        String ans = "";
        
        for(int i=s.length()-1; i>=0; i--){
            if(s.charAt(i) == ' ' && wordStarted)
                return ans.length();
            
            if(s.charAt(i) == ' ' && !wordStarted)
                continue;
            
            if(s.charAt(i) != ' ' && !wordStarted){
                wordStarted = true;
            }
            
            ans = s.charAt(i)+ans;
        }
        return ans.length();
        
    }
}