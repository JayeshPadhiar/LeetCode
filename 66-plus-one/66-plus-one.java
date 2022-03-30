class Solution {
    public int[] plusOne(int[] digits) {
        
        boolean carry = true;
        
        for(int i=digits.length-1; i>=0; i--){
            if(carry){
                if(digits[i] == 9){
                    digits[i] = 0;
                }else{
                    digits[i]++;
                    carry = false;
                }
            }else{
                return digits;
            }
        }
        
        if(carry){
            int[] ans = new int[digits.length+1];
            ans[0] = 1;
            return ans;
        }
        
        return digits;
        
    }
}