class Solution {
    public String longestCommonPrefix(String[] strs) {
        
        String ans = "";
        
        if(strs.length == 1)
            return strs[0];
        
        ans = strs[0];
        
        for(int i=1; i<strs.length; i++){
            
            int ind = 0;
            String temp = "";
            
            while(ind < strs[i].length() && ind < ans.length() 
                  && strs[i].charAt(ind)==ans.charAt(ind)){
                
                temp = temp+strs[i].charAt(ind);
                ind++;
            }
            
            ans = temp;
        }
        
        return ans;
        
        
    }
}