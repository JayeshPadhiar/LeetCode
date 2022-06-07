class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        unordered_map<int, bool> map;
        
        for(auto i: nums1){
            map[i] = false;
        }
        
        for(auto i: nums2){
            if(map.find(i) != map.end())
                map[i] = true;
        }
        
        for(auto kv: map){
            if (kv.second == true)
                ans.push_back(kv.first);
                
        }
        return ans;
    }
};