class Solution {
public:
    int binaryGap(int n) {
        
        int dist=0, maxdist=0,flag=0;
        
        while(n){
            if(n&1){
                flag=1;
                maxdist = max(maxdist,dist);
                dist = 1;
            }else if(flag){
                dist++;
            }
            n = n>>1;
        }
        
        return maxdist;
    }
};