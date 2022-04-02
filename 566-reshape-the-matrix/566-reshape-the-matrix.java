class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        
        if((mat.length*mat[0].length) != r*c)
            return mat;
           
        int m=0,n=0;
        int[][] ans = new int[r][c];
        
        for(int i=0; i<mat.length; i++){
            for(int j=0; j<mat[0].length; j++){
                if(n>=c){
                    m++;
                    n=0;
                }
                ans[m][n++] = mat[i][j];
            }
        }
        return ans; 
    }
}