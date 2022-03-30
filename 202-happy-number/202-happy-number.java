class Solution {
    public boolean isHappy(int num) {
        
        HashSet<Integer> set = new HashSet();
        set.add(20);
        set.add(4);
        set.add(16);
        set.add(37);
        set.add(58);
        set.add(89);
        set.add(145);
        set.add(42);
        
        
        int sum = 0;
        while(num!=0){
            sum+=(num%10)*(num%10);
            num/=10;
            
            if(num==0){   
                if(sum==1)
                    return true;
                else if(set.contains(sum))
                    return false;
                else{
                    num=sum;
                    sum=0;
                }
            }else
                continue;
        }
        
        return true;
    }
}