class Solution {
    public String freqAlphabets(String s) {
        
        char[] str = s.toCharArray();
        String ans = "";
        
        int i = str.length-1;
        for(i=str.length-1; i>=2; i--){
            if(str[i] == '#'){
                char x = (char)((int)((str[i-2]=='1')? 'j': 't') + ((int)(str[i-1]) - 48));
                ans = x+ans;
                i=i-2;
            }else{
                ans = (char)(str[i]+48) + ans;
            }
        }
        
        while(i >=0 ){
            ans = (char)(str[i--]+48) + ans;
        }
        
        return ans;
    }
}