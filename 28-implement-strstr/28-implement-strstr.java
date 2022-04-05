class Solution {
    public int strStr(String haystack, String needle) {
        
        String comp = "";
        
        if(needle.length() == 0)
            return 0;
        
        int i=0;
        for(i=0; i<haystack.length(); i++){
            
            if(comp.length() < needle.length()){
                comp = comp + haystack.charAt(i);
                continue;
            }
            
            //System.out.println(comp);
            
            if(comp.equals(needle))
                return i-(comp.length());
            
            comp = comp.substring(1, comp.length());
            comp = comp+haystack.charAt(i);
        }
        
        if(comp.equals(needle))
            return i-(comp.length());
        
        return -1;
    }
}