class Solution {
    public int[] countBits(int n) {
        
        int[] ans = new int[n+1];
        
        for(int i=0; i<ans.length; i++){
            
            int num = 0;
            int x = i;
            
            while(x != 0){
                num += (x & 1);
                x = x>>>1;
            }
            
            ans[i] = num;
        }
        
        return ans;
        
    }
}