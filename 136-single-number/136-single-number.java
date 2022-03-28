class Solution {
    public int singleNumber(int[] nums) {
        HashMap<Integer, Boolean> map = new HashMap();
        
        
        for(int i: nums){
            if(map.containsKey(i)){
                map.remove(i);
            }
            
            else{
                map.put(i, true);
            }
        }
        
        for(int i: map.keySet())
            return i;
        
        return 0;
        
    }
}