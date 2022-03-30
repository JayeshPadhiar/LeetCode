class Solution {
    public String reverseWords(String s) {
        
        int prev = 0;
        char c = ' ';
        char[] str = s.toCharArray();
        
        for(int i=0; i<str.length; i++){
            
            if(str[i] == ' ' || i==str.length-1){
                int l = prev;
                
                int r = i-1;
                if(i==str.length-1)
                    r = i;  
                
                while(r>=l){
                    char x = str[l];
                    str[l] = str[r];
                    str[r] = x;
                    
                    l++;
                    r--;
                }
                prev = i+1;
            }
        }
        return String.valueOf(str);
        
    }
}