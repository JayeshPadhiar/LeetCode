class Solution {
    public int[] sortedSquares(int[] nums) {
        
        Stack<Integer> x = new Stack();
        
        int pos = 0;
        
        for(int i=0; i<nums.length; i++){
            if(nums[i]<0)
                x.push(nums[i] * nums[i]);
            else{
                pos = i;
                break;
            }
        }
        
        int[] ans = new int[nums.length];
        
        for(int i=0; i<nums.length; i++){
            
            
            if(pos < nums.length){
                int xpos = nums[pos]*nums[pos];
                if(!x.empty()){   
                    if(pos < nums.length && xpos < x.peek()){
                        ans[i] = xpos;
                        pos++;
                    }else{
                        ans[i] = x.pop();
                    }
                }
                else{
                    ans[i] = xpos;
                    pos++;
                }
            }
            else{ 
                if(!x.empty()){    
                    ans[i] = x.pop();
                }
            }
            
        }
        
        return ans;
        
        
        
    }
}