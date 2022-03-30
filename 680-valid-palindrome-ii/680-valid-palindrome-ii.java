class Solution {
    public boolean validPalindrome(String s) {
        int l = 0;
        int r = s.length()-1;
        
        char[] arr = s.toCharArray();
        int x=0,y=0;
        
        boolean isPalin= true;
        while(r>=l){
            if(arr[l] != arr[r]){
                x = l;
                y = r;
                isPalin = false;
                break;
            }
            l++;
            r--;
        }
        
        if(isPalin)
            return true;
        
        for(int i=0; i<2; i++){
            int left = 0;
            int right = arr.length-1;
            
            int skip = x;            
            if(i==1)
                skip = y;
 
            isPalin = true;
                        
            while(right>=left){  
                if(left == skip)
                    left++;
                if(right == skip)
                    right--;
                
                if(arr[left] != arr[right]){
                    isPalin = false;
                    break;
                }
                
                left++;
                right--;
            }
            if(isPalin)
                return true;
        }
        
        return isPalin;
    }
}