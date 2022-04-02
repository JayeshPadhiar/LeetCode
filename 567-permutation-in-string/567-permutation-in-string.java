class Solution {
    public boolean checkInclusion(String s1, String s2) {
        
        int[] freq = new int[26];
        int[] test = new int[26];
        for(char i: s1.toCharArray()){
            freq[i-'a']++;
        }
        
        for(int i=0, j=s1.length()-1; i<=s2.length()-s1.length(); i++, j++){

            test = freq.clone(); 
            for(int x=i; x<=j; x++){
                test[s2.charAt(x)-'a']--;
            }
            
            boolean is = true;
            for(int x: test){
                if(x!=0){
                    is = false;
                    break;
                }
            }
            
            if(is)
                return true;
        }
        
        return false;
    }
}
