class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        
        for(int i=tri.size()-1; i>=1; i--){
            for(int j=0; j<tri[i].size()-1; j++){    
                tri[i-1][j] += min(tri[i][j], tri[i][j+1]);
                cout<<min(tri[i][j], tri[i][j+1])<<" ";
            }
        }
        
        return tri[0][0];
    }
};