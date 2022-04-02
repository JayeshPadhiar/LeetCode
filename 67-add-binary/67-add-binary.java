class Solution {
    public String addBinary(String a, String b) {
        
        String ans = "";
        boolean carry = false;
        int i=a.length()-1, j=b.length()-1;
        
        while(i>=0 && j>=0){
            
            if(carry){
                if(a.charAt(i) == '1' && b.charAt(j)=='1'){
                    ans = '1'+ans;
                }else if(a.charAt(i) == '1' || b.charAt(j)=='1'){
                    ans = '0'+ans;
                }else{
                    ans = '1'+ans;
                    carry = false;
                }
            }else{
                if(a.charAt(i) == '1' && b.charAt(j)=='1'){
                    ans = '0'+ans;
                    carry = true;
                }else if(a.charAt(i) == '1' || b.charAt(j)=='1'){
                    ans = '1'+ans;
                }else{
                    ans = '0'+ans;
                }
            }
            i--;
            j--;
        }
        
        while(i>=0){
            if(carry && a.charAt(i)=='1'){
                ans = '0'+ans;
            }else{
                ans = ((carry)?'1':a.charAt(i))+ans;
                carry = false;
            }  
            i--;
        }
        
        while(j>=0){
            if(carry && b.charAt(j)=='1'){
                ans = '0'+ans;
            }else{
                ans = ((carry)?'1':b.charAt(j))+ans;
                carry = false;
            }
            j--;
        }
        
        if(carry)
            ans = '1'+ans;
        
        return ans;
    }
}