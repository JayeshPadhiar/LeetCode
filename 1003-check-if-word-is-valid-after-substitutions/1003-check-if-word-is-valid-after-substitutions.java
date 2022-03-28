class Solution {
    public boolean isValid(String s) {
        
        while(s.contains("abc")){
            s = s.replace("abc", "");
        }
        
        if(s == "")
            return true;
        
        return false;
    }
}