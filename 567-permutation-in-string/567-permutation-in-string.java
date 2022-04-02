class Solution {
    public boolean checkInclusion(String s1, String s2) {
        
        if(s2.length() < s1.length())
            return false;
        
        int[] freq = new int[26];
        int[] test = new int[26];
        
        for(int i=0; i<s1.length(); i++){
            freq[s1.charAt(i)-'a']++;
            test[s2.charAt(i)-'a']++;
        }
                
        for(int i=0; i<s2.length()-s1.length(); i++){
            boolean is = true;
            for(int x=0; x<freq.length; x++){
                if(freq[x]!=test[x]){
                    is = false;
                    break;
                }
            }
            if(is) return true;
            
            test[s2.charAt(i+s1.length())-'a']++;
            test[s2.charAt(i)-'a']--;
        }
        
        boolean is = true;
        for(int x=0; x<freq.length; x++){
            if(freq[x]!=test[x]){
                is = false;
                break;
            }
        }
        if(is) return true;
        
        return false;
    }
}
