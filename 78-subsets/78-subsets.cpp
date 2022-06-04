class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        for(int i=0; i<pow(2, nums.size()); i++){
            
            int x = i;
            int index = 0;
            vector<int> vec;
            
            while(x != 0){
                if(x & 1){
                    vec.push_back(nums[index]);
                }
                x = x>>1;
                index++;
            }   
            ans.push_back(vec);
        }
        return ans;
    }
};