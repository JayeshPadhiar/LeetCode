class Solution {
    public int minimumDifference(int[] nums, int k) {
        
        Arrays.sort(nums);
        int mindiff = nums[k-1]-nums[0];
        
        for(int i=k, j=1; i<nums.length; i++, j++){
            if(nums[i]-nums[j] < mindiff)
                mindiff = nums[i]-nums[j];
        }
        
        return mindiff;        
    }
}