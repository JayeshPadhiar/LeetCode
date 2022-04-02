class Solution {
    
    
    int[][] grid;
    boolean[][] seen;
    
    public int maxAreaOfIsland(int[][] grid) {
        this.grid = grid;
        seen = new boolean[grid.length][grid[0].length];
        
        int ans = 0;
        
        for(int i=0; i<grid.length; i++){
            for(int j=0; j<grid[0].length; j++){
                if(grid[i][j] != 0 && !seen[i][j]){
                    int ar = area(grid, i,j);
                    if(ar > ans)
                        ans = ar;
                }
            }
        }
        return ans;
    }
    
    public int area(int[][] grid, int r, int c){
        
        if(r<0 || r>=grid.length || c<0 || c >=grid[0].length)
            return 0;
        
        if(grid[r][c] == 0 || this.seen[r][c])
            return 0;
        
        this.seen[r][c] = true;
        return 1+area(grid, r-1, c)+area(grid, r+1, c)+area(grid, r, c-1)+area(grid, r, c+1);
    }
    
}