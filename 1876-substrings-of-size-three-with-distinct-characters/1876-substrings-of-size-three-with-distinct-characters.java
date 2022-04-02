class Solution {
    public int countGoodSubstrings(String s) {
        
        int count = 0;
        
        if(s.length() < 3)
            return 0;
                
        int j=0;
        for(int i=2; i<s.length(); i++){
            if(s.charAt(j)!=s.charAt(j+1) 
               && s.charAt(j+1)!=s.charAt(j+2) 
               && s.charAt(j)!=s.charAt(j+2))
                count++;
            
            j++;
        }
        return count;
    }
}