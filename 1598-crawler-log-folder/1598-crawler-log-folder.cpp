class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ops = 0;
        
        for(auto i: logs){
            if(i == "../"){
                if(ops > 0)
                    ops--;
            }
            else if(i == "./"){
                
            }
            else
                ops++;
        }
        
        return ops;
    }
};