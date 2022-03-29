class Solution {
    public int[] twoSum(int[] numbers, int target) {
        
        int[] ans = new int[2];
        for(int i=0; i<numbers.length; i++){
            
            int l = i+1;
            int r = numbers.length-1;
            int sec = target-numbers[i];
            while(r>=l){  
                int mid = l+(r-l)/2;
                
                if(numbers[mid] == sec){
                    ans[0] = i+1;
                    ans[1] = mid+1;
                    return ans;
                }
                else if(numbers[mid] > sec)
                    r = mid-1;
                else
                    l = mid+1;
            }
        }
        return ans;
    }
}