class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        int ans = 0;
        int x = piles.size()-2;
        sort(piles.begin(), piles.end());
        
        for(int i=0; i<piles.size()/3; i++){
            ans+=piles[x];
            x-=2;
        }
        
        return ans;
    }
};