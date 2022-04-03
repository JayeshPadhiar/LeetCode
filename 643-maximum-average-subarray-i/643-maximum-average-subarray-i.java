class Solution {
    public double findMaxAverage(int[] nums, int k) {
        
        double avg = 0;
        int sum = 0;
        
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        avg = (double)sum/k;
        
        for(int i=k, j=0; i<nums.length; i++){
            sum-=nums[j++];
            sum+=nums[i];
            
            if((double)sum/k > avg)
                avg = (double)sum/k;
            
            System.out.println(sum);
            
        }
        return avg;
        
    }
}