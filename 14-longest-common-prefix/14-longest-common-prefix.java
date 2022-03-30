class Solution {
    public String longestCommonPrefix(String[] strs) {
        
        int ind=0;
        String s = "";
        
        while(true){
            boolean match = true;
            if(strs[0].length() <= ind)
                break;
            
            char c = strs[0].charAt(ind);
            
            for(String i: strs){
                if(i.length()>ind && i.charAt(ind)==c){
                    //continue;
                }else{
                    match = false;
                    break;
                }   
            }
            
            if(match){
                s=s+c;
                ind++;
            }else{
                break;
            }
        }
        return s;
    }
}