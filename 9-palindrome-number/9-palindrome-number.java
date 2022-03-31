class Solution {
    public boolean isPalindrome(int x) {
        
        if(x==0)
            return true;
        if(x<0 || x%10==0)
            return false;
        
        
        int lastzero = 1;
        int num = x;
        long palin = 0;
        
        while(num!=0){
            if(num%10==0)
                lastzero++;
            else{
                palin*=Math.pow(10, lastzero); 
                palin+=(num%10);
                lastzero=1;
            }
            num/=10;
        }
        System.out.println(palin);
        
        if(palin == (long)x)
            return true;
        
        return false;
    }
}