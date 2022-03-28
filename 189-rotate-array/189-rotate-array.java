class Solution {
    public void rotate(int[] nums, int k) {
        if(k == nums.length)
            return;
        
        int x = (k<nums.length)?k : (k%nums.length);
        
        int r = nums.length-1;
        int l = nums.length-1-x;
        
        Stack<Integer> s = new Stack();
        
        int i = x;
        
        while(i-- != 0){
            s.push(nums[nums.length-1-i]);
        }
        
        while(l >= 0){
            nums[r--] = nums[l--];
        }
        
        while(r >= 0){
            nums[r--] = s.pop();
        }
       
    }
}