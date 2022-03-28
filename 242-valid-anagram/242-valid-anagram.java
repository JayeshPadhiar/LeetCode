class Solution {
    public boolean isAnagram(String s, String t) {
        String[] a = s.split("");
        String[] b = t.split("");
        
        Arrays.sort(a);
        Arrays.sort(b);
          
        if(s.length() != t.length())
            return false;
        
        int i=0;
        while(i<a.length){
            //System.out.println(a[i] + " " + b[i]);
            if(!a[i].equals(b[i])){
                return false;
            }
            i++;
        }
        
        return true;
    }
}