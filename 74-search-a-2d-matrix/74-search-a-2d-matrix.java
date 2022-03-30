class Solution {    
    public boolean searchMatrix(int[][] mat, int target) {
        
        int l = 0;
        int r = mat.length-1;
        
        while(r>=l){
            int m = l+(r-l)/2;
            if(mat[m][0] == target)
                return true;
            else if(mat[m][0] > target)
                r = m-1;
            else
                l = m+1;
        }
        
        int x = (r<0)?0:r;
        l = 0;
        r = mat[x].length-1;
        
        while(r>=l){
            
            int m = l+(r-l)/2;
            if(mat[x][m] == target)
                return true;
            else if(mat[x][m] > target)
                r = m-1;
            else
                l = m+1;
        }
        return false;
    }
}