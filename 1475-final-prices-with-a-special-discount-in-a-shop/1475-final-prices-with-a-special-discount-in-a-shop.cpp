class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        //vector<int> final_price;
        
        for(int i=0; i<prices.size(); i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices.at(j) <= prices.at(i)){
                    prices[i] -= prices.at(j);
                    break;
                }
                
            }
        }
        
        return prices;
    }
};