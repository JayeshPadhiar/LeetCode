class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        unordered_map<int, int> map;
        int prefixSum[nums.size()+1];

	    int maxScore = 0;
        
	    for (int l=0, r=0; r<nums.size(); r++) {
    		prefixSum[r+1] = prefixSum[r] + nums[r];
		    
            if (map.find(nums[r]) != map.end()) 
			    l = max(l, map[nums[r]]+1);
            
		    maxScore = max(maxScore, prefixSum[r+1]-prefixSum[l]);
		    map[nums[r]]=r;
	    }

	    return maxScore;
    }
};