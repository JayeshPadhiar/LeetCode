class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        
        Arrays.sort(nums);
        HashSet<Integer> set = new HashSet();
        List<List<Integer>> ans = new ArrayList();
        
        for(int i=0; i<nums.length-2; i++){
            
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int target = -(nums[i]);
            
            int l = i+1;
            int r = nums.length-1;
            
            while(l<r){
                if((nums[r]+nums[l] == target)){
                    List<Integer> arr = new ArrayList();
                    arr.add(nums[i]);
                    arr.add(nums[l]);
                    arr.add(nums[r]);
                    ans.add(arr);
                 
                    while (l < r && nums[r] == nums[r - 1]) r--;
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    
                    r--;
                    l++;
                    
                }
                else if(nums[r]+nums[l] > target)
                    r--;
                else
                    l++;
            }
        }
        return ans;
    }
}