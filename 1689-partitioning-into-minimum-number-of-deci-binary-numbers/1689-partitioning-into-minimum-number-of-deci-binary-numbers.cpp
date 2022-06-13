class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        
        for(char i: n){
            if(((int)i-48) > ans)
                ans = ((int)i-48);
        }
        
        return ans;
    }
};