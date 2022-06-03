class NumMatrix {
public:
    vector<vector<int>> mat;
    
    NumMatrix(vector<vector<int>>& matrix) {
        
        for(int i=0; i<matrix.size(); i++){
            
            int sum = 0;
            vector<int> arr;
            
            for(int j=0; j<matrix[0].size(); j++){
                sum+=matrix[i][j];
                arr.push_back(sum);
            }
            
            mat.push_back(arr);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int ans = 0;
        
        for(int i=row1; i<=row2; i++){
            
            if(col1 == 0){
                ans+=mat[i][col2];
            }else{
                ans+= mat[i][col2]-mat[i][col1-1];
            }
        }
        
        return ans;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */