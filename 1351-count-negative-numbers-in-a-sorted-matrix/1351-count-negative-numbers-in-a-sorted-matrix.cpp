class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int ans=0;
        
        for(int i=0; i<grid.size(); i++){             
                
                int left=0;
                int right = grid[0].size()-1;
                int mid=0;
                
                while(right >= left){
                    mid = left+(right-left)/2;
                    
                    if(grid[i][mid] >= 0){
                        left = mid+1;
                    }
                    else{
                        right = mid-1;
                    }
                }
                
                ans+=grid[0].size()-right-1;
        }
        
        return ans;
        
    }
};