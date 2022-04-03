class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        
        HashMap<Integer, List<Integer>> map = new HashMap();
        
        for(int i=0; i<nums.length; i++){
            if(map.containsKey(nums[i])){
                map.get(nums[i]).add(i);
            }else{
                List<Integer> arr = new ArrayList();
                arr.add(i);
                map.put(nums[i], arr);
            }
        }
        
        for (Map.Entry<Integer,List<Integer>> entry : map.entrySet()){
            List<Integer> list = entry.getValue();
            for(int i=1, j=0; i<list.size(); i++, j++){
                if(list.get(i) - list.get(j) <= k)
                    return true;
            }
        }
        return false;
    }
}