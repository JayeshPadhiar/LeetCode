class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        int maxlen = 0;
        int i=0, j=0;
        
        HashSet<Character> set = new HashSet();
        
        while(j < s.length()){
            if(!set.contains(s.charAt(j))){
                set.add(s.charAt(j++));
                maxlen = Math.max(maxlen, set.size());
            }else{
                set.remove(s.charAt(i++));
            }
        }
        return maxlen;
    }
}