class Solution {
    public boolean isAlienSorted(String[] words, String order) {
        HashMap <Character, Integer> map = new HashMap();
        for(int i=0; i<order.length(); i++){
            map.put(order.charAt(i), i);
        }
        
        for(int i=0; i<words.length-1; i++){
            char[] a = words[i].toCharArray();
            char[] b = words[i+1].toCharArray();
            
            if(map.get(a[0]) < map.get(b[0]))
               continue;
            else if(map.get(a[0]) == map.get(b[0])){
                int x=0, y=0;
                boolean isSmall = false;
                
                while(x<a.length && y<b.length){
                    if(map.get(a[x]) > map.get(b[y]))
                        return false;
                    if(map.get(a[x]) < map.get(b[y])){
                        isSmall = true;
                        break;
                    }
                    x++;
                    y++;
                }
                if(isSmall) continue;
                if(x != a.length && y==b.length) return false;
            }
            else
                return false;
        }
        
        return true;
    }
}