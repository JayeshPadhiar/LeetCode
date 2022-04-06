class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        
        //Arrays.sort(nums);
        
        HashSet<List<Integer>> ans = new HashSet();
        
        HashMap<Integer, Integer> map = new HashMap();
        for(int i: nums){
            map.put(i, map.getOrDefault(i, 0)+1 );
        }
        
        int span = 1;
        while(span < nums.length){
            for(int i=span; i<nums.length; i++){
                if(map.containsKey(0-(nums[i] +nums[i-span]))){
                    
                    int c = 0-(nums[i] +nums[i-span]);                   
                    //System.out.println(nums[i-span] + " "+ nums[i] + " " + c);
                    
                    if((nums[i-span]==nums[i] && nums[i]==c && nums[i-span]==c) && map.get(c)<3)
                        continue;
                        
                    
                    if(((nums[i] == c && map.get(c) > 1) || 
                    (nums[i-span] == c && map.get(c) > 1) ||
                    (nums[i-span] != c && nums[i]!=c)) && nums.length >= 3){
                        List<Integer> l = new ArrayList();
                        l.add(nums[i]);
                        l.add(nums[i-span]);
                        l.add(c);
                        Collections.sort(l);
                        ans.add(l);
                    }else{
                        continue;
                    }   
                }
            }
            span++;
        }
        return new ArrayList(ans);
    }
}