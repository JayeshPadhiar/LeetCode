class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int ans = 0;
        int n = grid.size();
        
        vector<int> rowmax(n, 0);
        vector<int> colmax(n, 0);
        
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++){
                rowmax[i] = max(rowmax[i], grid[i][j]);
                colmax[j] = max(colmax[j], grid[i][j]);
            }
        
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                ans+=min(rowmax[i],colmax[j])-grid[i][j];  
                
        return ans;

    }
};