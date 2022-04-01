class Solution {
    public void moveZeroes(int[] nums) {
        
        int ind = 0;
        int numZero = 0;
        
        for(int j=0; j<nums.length; j++){
            if(nums[j] == 0){
                numZero++;
                continue;
            }else{
                nums[ind] = nums[j];
                ind++;
            }
        }
        for(int i=nums.length-numZero; i<nums.length; i++){
            nums[i] = 0;
        }
    }
            
}
