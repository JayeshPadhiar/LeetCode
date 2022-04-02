class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        
        int col = image[sr][sc];
        if(col != newColor) fill(image, sr, sc, col, newColor);
        
        return image;
        
    }
    
    public void fill(int[][] image, int r, int c, int color, int newcol){
        
        if(image[r][c]==color){
            image[r][c] = newcol;
            if(r>=1) fill(image, r-1, c, color, newcol);
            if(r<image.length-1) fill(image, r+1, c, color, newcol);
            if(c>=1) fill(image, r, c-1, color, newcol);
            if(c<image[0].length-1) fill(image, r, c+1, color, newcol);
        }
        
    }
}