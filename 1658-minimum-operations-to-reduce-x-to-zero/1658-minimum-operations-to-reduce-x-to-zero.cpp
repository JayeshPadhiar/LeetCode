class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        vector<int> a;
        unordered_map<int, int> b;
        int steps=-1, i=0;
        
        int sum=0;
        while(i<nums.size()){
            sum+=nums[i];
            
            if(sum == x){
                steps = i+1;
            }
            
            a.push_back(sum);
            i++;
        }
        
        if(sum < x){
            return -1;
        }
        
        sum=0;
        i=nums.size()-1;
        while(i>=0){
            sum+=nums[i];
            
            if(sum == x){
                
                if(steps == -1){
                    steps = nums.size()-i;
                }
                
                if(steps!=-1 && steps>nums.size()-i){
                    steps = nums.size()-i;
                }
                
            }
            
            b[sum] = nums.size()-i;
            i--;
        }
        
    
        for(int i=0; i<a.size(); i++){
            if(b.find(x-a[i]) != b.end()){
                if(i+b[x-a[i]] <= nums.size()){
                    if(steps == -1){
                        steps = i+b[x-a[i]]+1;
                    }else if(steps > i+b[x-a[i]]){
                        steps = i+b[x-a[i]]+1;
                    }
                }
            }
        }
        
        return steps;
    }
};