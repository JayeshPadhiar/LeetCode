class Solution {
    public int mySqrt(int i) {
        int l=0, r=i;
        
        
        while(r>=l){
            long mid = l+(r-l)/2;
            
            if(mid*mid==i)
                return (int)mid;
            
            else if(mid*mid > i){
                r = (int)mid-1;
            }else{
                l = (int)mid+1;
                
            }
        }
        return r;
    }
    
}