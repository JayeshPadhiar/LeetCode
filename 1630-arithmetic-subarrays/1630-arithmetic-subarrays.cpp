class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool> ans;
        
        for(int i=0; i<l.size(); i++){
            
            vector<int> vec = {nums.begin()+l[i], nums.begin()+r[i]+1}; 
            sort(vec.begin(), vec.end());
            
            bool arithmetic = true;
            int diff = vec[0]-vec[1];
            for(int j=0; j<r[i]-l[i]; j++){
                if(vec[j]-vec[j+1] != diff){
                    arithmetic = false;
                }
            }
            ans.push_back(arithmetic);
        }
        
        return ans;
        
    }
};