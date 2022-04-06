class Solution {
    public int threeSumClosest(int[] nums, int target) {
        
        int diff = Integer.MAX_VALUE;
        int ans=0;
        
        Arrays.sort(nums);
        
        for(int i=0; i<nums.length-2; i++){
            
            int l=i+1;
            int r = nums.length-1;
            
            while(l<r){
                
                int val = nums[i]+nums[l]+nums[r];
                
                if(val == target){
                    return val;
                }
                
                if(Math.abs(target - val) < diff){
                    diff = Math.abs(target - val);
                    ans = val;    
                }
                
                if(val < target){
                    l++;
                }else
                    r--;
                
            }
        }
        
        return ans;
      
    }
}