class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        
        for(char i: n){
            int digit = (int)i-48;
            if(digit > ans)
                ans = digit;
        }
        
        return ans;
    }
};