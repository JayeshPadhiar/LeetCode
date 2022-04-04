class Solution {
    public String toLowerCase(String s) {
        
        char[] str = s.toCharArray();
        for(int i=0; i<str.length; i++){
            if((int)str[i]>=65 && (int)str[i] <=90)
                str[i] += 32;
        }        
        
        return String.valueOf(str);
    }
}