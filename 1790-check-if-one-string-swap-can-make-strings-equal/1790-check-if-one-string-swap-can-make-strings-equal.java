class Solution {
    public boolean areAlmostEqual(String s1, String s2) {
        
        int num = 0;
        
        HashMap<Character, Character> map = new HashMap();
        
        char a=' ';
        char b=' ';
        
        
        for(int i=0; i<s1.length(); i++){
            if(s1.charAt(i) != s2.charAt(i)){
                num++;
                map.put(s1.charAt(i), s2.charAt(i));
                a = s1.charAt(i);
                b = s2.charAt(i);
            }
            if(num>2)
                return false;
        }
        
        if(num==0)
            return true;
        
        if(num==2){
            if(map.containsKey(a) && map.containsKey(b) && a==map.get(b) && b==map.get(a))
                return true;
            else
                return false;
        }
        
        return false;
        
    }
}