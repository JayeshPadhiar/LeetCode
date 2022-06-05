class Solution {
public:
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        vector<int> ans;
        int x = 0;
        int y = 0;
        
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i] == target)
                x++;
            
            if(nums[i] < target)
                y++; 
        }
        
        for(int i=0; i<x; i++){
            ans.push_back(y++);
        }
        
        return ans;
        
    }
};