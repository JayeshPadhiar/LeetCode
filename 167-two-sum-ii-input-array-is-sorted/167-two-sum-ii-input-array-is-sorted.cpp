class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> ans;
            
        for(int i=0; i<numbers.size(); i++){
            int second = target-numbers[i];
        
            int left = i+1;
            int right = numbers.size()-1;
            while(right >= left){
                int mid = left+(right-left)/2;
            
                if(numbers[mid] == second){
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    return ans;
                }else if(numbers[mid] > second){
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }
        }
        return ans;
    }
};