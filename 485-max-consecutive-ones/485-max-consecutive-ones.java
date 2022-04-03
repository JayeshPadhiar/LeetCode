class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max = 0;
        int times = 0;
        
        for(int i: nums){
            if(i==1){
                times++;
                max = (times>max)?times:max;
            }
            else
                times = 0;
        }
        return max;
    }
}