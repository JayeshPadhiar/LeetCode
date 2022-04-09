public class Solution {
    public int reverseBits(int n) {
        
        int sum = 0;
        for(int i=0; i<32; i++){
            sum = sum<<1;
            sum+=(n&1);
            n=n>>>1;
        }
        return sum;
        
    }
}