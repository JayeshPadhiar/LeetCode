class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i<nums1.size(); i++){
            int j = 0;
            int greater_num = -1;
            
            while(nums2[j] != nums1[i])
                j++;
            
            for(int x=j; x<nums2.size(); x++){   
                if(nums2[x] > nums1[i]){
                    greater_num = nums2[x];
                    break;
                }
            }
        nums1[i] = greater_num;
        }
        
        return nums1;
        
    }
    
    
};