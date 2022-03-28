class Solution {
    public int titleToNumber(String columnTitle) {
        int ans = 0;
                
        for(char i: columnTitle.toCharArray()){
            ans *= 26;
            ans += (i - 'A' +1);
        }
        
        return ans;
    }
}