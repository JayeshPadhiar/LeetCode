class Solution {
    public int lengthOfLastWord(String s) {
        
        boolean wordStarted = false;
        int index = s.length()-1;
        String ans = "";
        
        for(int i=s.length()-1; i>=0; i--){
            if(s.charAt(i) == ' ' && wordStarted){
                return index-i;
            }
            
            if(s.charAt(i) == ' ' && !wordStarted){
                index = i;
                continue;
            }
            
            if(s.charAt(i) != ' ' && !wordStarted){
                index = i;
                wordStarted = true;
            }  
        }
        return index+1;
        
    }
}