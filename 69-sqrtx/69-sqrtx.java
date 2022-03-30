class Solution {
    public int mySqrt(int i) {
        long x=0;
        while(x*x <= i){
            x++;
        }
        return (int)x-1;
    }
}