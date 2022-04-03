class Solution {
    public String mergeAlternately(String a, String b) {
        
        int i=0, j=0;
        String ans = "";
        
        while(i<a.length() && j<b.length()){
            ans = ans+a.charAt(i++);
            ans = ans+b.charAt(j++);
        }
        
        if(i<a.length())
            ans = ans+a.substring(i);
        else
            ans = ans+b.substring(j);
        
        return ans;
    }
}