class Solution {
public:
    int minSwaps(string s) {
        int open=0, close=0, ans=0;
        
        for(auto x: s){
            if(x == ']'){
                if(open<=close){
                    open++;
                    ans++;
                }else{
                    close++;
                }
            }else{
                open++;
            }
        }
        
        return ans;
    }
};