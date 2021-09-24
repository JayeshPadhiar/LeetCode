class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = left+(right-left)/2;
        
        while(right >= left)
        {
            mid = left+(right-left)/2;
            
            if(nums.at(mid) == target)
                return mid;
            else if(nums.at(mid) > target)
                right = mid-1;       
            else left = mid+1;
        }
        return left;
    }
};