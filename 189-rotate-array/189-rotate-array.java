class Solution {
    public void rotate(int[] nums, int k) {
        if(k == nums.length)
            return;
        
        int x = (k<nums.length)?k : (k%nums.length);
        
        int r = nums.length-1;
        int l = nums.length-1-x;
        
        
        
        int[] sub = new int[x];
        
        int i = x;
        
        while(i-- != 0){
            sub[i] = (nums[nums.length-1-i]);
        }
        
        while(l >= 0){
            nums[r--] = nums[l--];
        }
        
        i=0;
        while(r >= 0){
            nums[r] = sub[i++];
            r--;
        }
       
    }
}