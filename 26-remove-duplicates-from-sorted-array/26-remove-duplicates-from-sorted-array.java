class Solution {
    public int removeDuplicates(int[] nums) {
        
        int dups = 0;
        int x = 1;
        
        for(int i=1; i<nums.length; i++){
            
            if(nums[x-1] < nums[i]){
                nums[x] = nums[i];
                x++;
            }
            else{
                dups++;
            }
        }
        
        return nums.length - dups;
        
    }
}