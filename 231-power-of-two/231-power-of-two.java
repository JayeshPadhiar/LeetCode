class Solution {
    public boolean isPowerOfTwo(int n) {
        
        int times = 0;
        
        if(n<0)
            return false;
        
        while(n!=0){
            times += (n&1);
            n = n>>>1;
        }
        
        return (times==1)?true:false;
        
    }
}