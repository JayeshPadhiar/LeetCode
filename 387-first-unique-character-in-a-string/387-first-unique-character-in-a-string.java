class Solution {
    public int firstUniqChar(String s) {
        
        HashMap<Character, Integer> map = new HashMap();
        
        char[] arr = s.toCharArray();
        
        for(int i=0; i<arr.length; i++){
            if(map.containsKey(arr[i])){
                map.put(arr[i], map.get(arr[i])+1);
            }else{
                map.put(arr[i], 1);
            }
        }
                
        for(int i=0; i<arr.length; i++){
            if(map.get(arr[i]) ==1)
                return i;
        }
        
        return -1;
    }
}